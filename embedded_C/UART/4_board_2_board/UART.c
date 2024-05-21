#include "stm32f401rbt6.h"
#include "systicktimer.h"
void UART_init(void)
{
	//RCC_Configiration
	RCC_APB1 |=(0x1<<17);//Enable USRT2 clock
	RCC_AHB1ENR |=(0x1<<0);//Enabling PORT-A Clock
	RCC_AHB1ENR |=(0x1<<1);//Enabling PORT-B Clock
	RCC_AHB1ENR |=(0x1<<2);//Enabling PORT-C Clock
	
	//GPIOA Configuration
	GPIOA_MODE |=10<<4;//loading '10' in PA2,PA3 to set alternate mode
	GPIOA_AFRL |=(0x7<<8) | (0x7<<12);  //Loading '7' AFRL(MUX_REG) bit fields
	
	//GPIOB Configuration
	GPIOB_MODE  &= (0xC3FFFFFF);//clearing the [27,26,29,28] positions
	GPIOB_MODE  |= (0x14000000);//loading 01[27,26,29,28] to set port-B as output

	//GPIOC Configuration
	GPIOC_PUPDR |= (0x00050000); //PULL-UP resistor port c

	
	//UART Configuration
	USART2_BRR = 0x683<<0;//Set 9600 baud rate in BRR (0x683)
	USART2_CR1 |=(0x1<<13)|(0x1<<2)|(0x1<<3);//Set 13th, 2nd and 3rd bits in CR1 register to enable USART 2 enable
		
}

//sending charcter
void UART2_OutChar (unsigned char ch)
{
	while(!(USART2_SR & (0x1<<7)));// check 7th bit (TXE) value,
	USART2_DR=ch;
	KM_mdelay(50);	
}

//receving character
unsigned char USART2_InChar_NonBlock (void)

	{
		if(USART2_SR & (0x1<<5))//check 5th bit (RXNE) value
		      return (USART2_DR&0xFF);
		//return 0;
	}


	
	
	
	
	
