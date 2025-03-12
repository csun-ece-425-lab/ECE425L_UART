/**
 * @file UART0.c
 *
 * @brief Source code for the UART0 driver.
 *
 * This file contains the function definitions for the UART0 driver.
 *
 * @note For more information regarding the UART module, refer to the
 * Universal Asynchronous Receivers / Transmitters (UARTs) section
 * of the TM4C123GH6PM Microcontroller Datasheet.
 *   - Link: https://www.ti.com/lit/gpn/TM4C123GH6PM
 *
 * @note Assumes that the frequency of the system clock is 50 MHz.
 *
 * @author
 */

#include "UART0.h"

void UART0_Init(void)
{

}

char UART0_Input_Character(void)
{	
	return 0;
}

void UART0_Output_Character(char data)
{

}

void UART0_Input_String(char *buffer_pointer, uint16_t buffer_size) 
{

}

void UART0_Output_String(char *pt)
{

}

uint32_t UART0_Input_Unsigned_Decimal(void)
{
	return 0;
}

void UART0_Output_Unsigned_Decimal(uint32_t n)
{

}

uint32_t UART0_Input_Unsigned_Hexadecimal(void)
{
	return 0;
}

void UART0_Output_Unsigned_Hexadecimal(uint32_t number)
{

}

void UART0_Output_Newline(void)
{

}
