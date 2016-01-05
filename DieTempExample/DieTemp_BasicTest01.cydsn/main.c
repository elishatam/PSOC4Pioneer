/*******************************************************************************
* File: main.c
*
* Version : 1.3
*
* Description:
*   This is a source code for example project of DieTemp
*
********************************************************************************
* Copyright 2012, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <device.h>

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Main function performs following functions:
*   1: Initializes the LCD
*   2: Get the temperature of the Die
*   3: Print the Die Temperature value in LCD
*   4: Print the Status value in the LCD
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    cystatus Status;
    int16 temperature;

    /* Initializing the LCD */
    LCD_Char_1_Start();

    while(1)
    {
        /* Providing some delay */
        CyDelay(50);

        /* Reading the Die Temperature value */
        Status = DieTemp_1_GetTemp(&temperature);
       

        /* Displaying the Die Temperature value on the LCD */
        LCD_Char_1_Position(0u, 0u);
        LCD_Char_1_PrintString("Temp = ");

        if (temperature >= 0)
        {
            LCD_Char_1_PrintString("+");
        }
        else
        {
            /* If the temperature value is negative, display "-" sign and make value positive */
            LCD_Char_1_PrintString("-");
            temperature = (uint16)(~temperature + 1u);
        }
        
        LCD_Char_1_PrintNumber((uint16) (temperature));
        LCD_Char_1_PrintString(" ");
        
        LCD_Char_1_PutChar(LCD_Char_1_CUSTOM_7);
        LCD_Char_1_PrintString("C");

        /* Displaying the status value on the LCD */
        LCD_Char_1_Position(1u, 0u);
        LCD_Char_1_PrintString("Status = ");
        LCD_Char_1_PrintInt8((uint8) Status);
    }
}


/* [] END OF FILE */
