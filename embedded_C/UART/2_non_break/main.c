/*Experiment 2: Write an Embedded C Program and implement USART Non-Blocking and USART 
TIMEOUT Functions.*/



#include "stm32f401rbt6.h"
#include "UART.h" 
char receive;
int main()
{
	UART_init();
	
	while (1)
	{
		//non-blocking
		UART2_OutChar('C');
		//receive=USART2_InChar_NonBlock ();
}
	
}
