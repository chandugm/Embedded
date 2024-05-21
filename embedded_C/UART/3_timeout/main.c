#include "stm32f401rbt6.h"
#include "UART.h" 
char receive;
int count=0;
int main()
{
	UART_init();
	
	while (1)
	{
	count++;
		if( USART2_InChar_TIMEOUT (1000)==0)
		{
			UART2_OutChar ('c');
		}
}
	
}
