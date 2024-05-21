#include "stm32f401rbt6.h"
char send;
void UART_init(void)
{
	//RCC_Configiration
	RCC_APB1 |=(0x1<<17);//Enable USRT2 clock
	RCC_AHB1ENR |=(0x1<<0);//Enabling PORT-A Clock
	
	//GPIOA Configuration
	GPIOA_MODE |=10<<4;//loading '10' in PA2,PA3 to set alternate mode
	GPIOA_AFRL |=(0x7<<8) | (0x7<<12);  //Loading '7' AFRL(MUX_REG) bit fields
	
	//UART Configuration
	USART2_BRR = 0x683<<0;//Set 9600 baud rate in BRR (0x683)
	USART2_CR1 |=(0x1<<13)|(0x1<<2)|(0x1<<3);//Set 13th, 2nd and 3rd bits in CR1 register to enable USART 2 enable
		
}

//sending charcter
void UART2_OutChar (unsigned char ch)
{
	if(USART2_SR & (0x1<<7))// check 7th bit (TXE) value,
			USART2_DR=ch;
}

//timing 
int USART2_InChar_TIMEOUT (unsigned int t)
{
	while(t--)
	{
		if(USART2_SR & (0x1<<5))//check 5th bit (RXNE) value
		{
			send=USART2_DR&0xFF;
			return 0;
		}
	}
	return -1;
}




	
	
	
	
	
