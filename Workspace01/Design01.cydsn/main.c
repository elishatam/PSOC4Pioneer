/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <ADC_SAR_Seq.h>

#define CH0_N       (0x00u)
#define TEMP_CH     (0x01u)
#define DELAY_1SEC  (1000u)

/* Get actual Vref. value from ADC SAR sequencer */
#define ADC_VREF_VALUE_V ((float)ADC_SAR_Seq_DEFAULT_VREF_MV_VALUE/1000.0)


volatile uint32 dataReady = 0u;
volatile int16 result[ADC_SAR_Seq_TOTAL_CHANNELS_NUM];
volatile uint32 timer_delay = 0u;

uint16 ms_count = 0;

/******************************************************************************
* Function Name: MY_ISR
*******************************************************************************
*
* Summary:
*  Handle Interrupt Service Routine. Source - Timer.
*
******************************************************************************/
CY_ISR(MY_ISR){
    ms_count++;
    
    if(ms_count == 1000) {   //1 sec
        //For every 1 second, enable injection channel for next scan
        ADC_SAR_Seq_EnableInjection();
        ms_count = 0; //reset ms counter
    }
}


/******************************************************************************
* Function Name: ADC_SAR_SEQ_ISR_LOC
*******************************************************************************
*
* Summary:
*  Handle Interrupt Service Routine. Source - ADC SAR Seq.
*
******************************************************************************/
CY_ISR(ADC_SAR_SEQ_ISR_LOC)
{
    uint32 intr_status;
    int32 temperature;
    
    //Read Interrupt Status registers
    intr_status = ADC_SAR_Seq_SAR_INTR_MASKED_REG;
    //Check for Injection End of Conversion
    if((intr_status & ADC_SAR_Seq_INJ_EOC_MASK) != 0u)
    {
        result[TEMP_CH] = ADC_SAR_Seq_GetResult16(TEMP_CH);
        dataReady |= ADC_SAR_Seq_INJ_EOC_MASK;
    }
    //Clear handled interrupt
    ADC_SAR_Seq_SAR_INTR_REG = intr_status;
}


int main()
{
    int16 ADCCountsCorrected;
    int32 temperature;
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Timer_Start(); //Configure and enable timer
    isr_1_StartEx(MY_ISR); //Point to MY_ISR to carry out the interrupt sub-routine
    
    //Init and start sequencing SAR ADC
    ADC_SAR_Seq_Start();
    ADC_SAR_Seq_StartConvert();
    //Enable interrupt and set interrupt handler to local routine
    ADC_SAR_Seq_IRQ_StartEx(ADC_SAR_SEQ_ISR_LOC);
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    for(;;)
    {
        /* Place your application code here. */
        
        
        //When conversion of the injection channel has completed
        if((dataReady & ADC_SAR_Seq_INJ_EOC_MASK) != 0u)
        {
            dataReady &= ~ADC_SAR_Seq_INJ_EOC_MASK;
            //Adjust data from ADC with resepct to Vref value.
            //Do this adjustment if Vref is set to any other than internal 1.024V
            ADCCountsCorrected = result[TEMP_CH]*((int16)((float)ADC_VREF_VALUE_V/1.024));
            
            temperature = DieTemp_CountsTo_Celsius(ADCCountsCorrected);
        }
            
            
        
    }
}

/* [] END OF FILE */
