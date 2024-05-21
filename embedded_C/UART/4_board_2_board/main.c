#include "stm32f401rbt6.h"
#include "UART.h" 

char ch;
int main()
{
	UART_init();
	GPIOB_ODR |=(0x1<<13 );
	GPIOB_ODR |=(0x1<<14 );

	while (1)
	{
		ch=USART2_InChar_NonBlock ();	
		
		//non-blocking
		if (!(GPIOC_IDR &  0x1<<8))
		{
		UART2_OutChar('R');
						
		}
		
		else if(!(GPIOC_IDR & 0x1<<9))
		{
		UART2_OutChar('G');	
			
		}
		
		if (ch=='R')
		{
			USART2_DR=ch;
			GPIOB_ODR ^=(0x1<<13); //Toggle RED LED
		}
		else if(ch=='G')
		{
			USART2_DR=ch;
			GPIOB_ODR ^=(0x1<<14); //Toggle GREEN LED
		}
}
	
}
