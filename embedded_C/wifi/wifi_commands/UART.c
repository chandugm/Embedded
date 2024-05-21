#include "stm32f401rbt6.h"
#include "UART.h"
#include "systicktimer.h"
#include "wifi.h"
char str[100];
void UART6_init(void)
{
	//RCC_Configiration
	RCC_APB2 |=(0x1<<5);//Enable USRT6 clock
	RCC_AHB1ENR |=(0x1<<2);//Enabling PORT-C Clock
	
	//GPIOA Configuration
	GPIOC_MODE |=0x0A<<12;//loading '10' in PC6,PC7 to set alternate mode
	GPIOC_AFRL |=(0x8<<24) | (0x8<<28);  //Loading '8' AFRL(MUX_REG) bit fields
	
	//UART-6 Configuration
	USART6_BRR = 0x87<<0;//Set 9600 baud rate in BRR (0x683)
	USART6_CR1 |=(0x1<<13)|(0x1<<2)|(0x1<<3);//Set 13th, 2nd and 3rd bits in CR1 register to enable USART 2 enable
		
}

//outchar_string
void UART6_OutChar_str(char *str)
{
	int i;
	for (i=0;str[i]!='\0';i++)
	{
		UART6_OutChar(str[i]);//sending char
	}
}
//outchar function
void UART6_OutChar(unsigned char ch)
{
	while(!(USART6_SR & (0x1<<7)))// check 7th bit (TXE) value,
	{
		;
	}
	USART6_DR=ch;//sending character by character
}
//receving character
unsigned char UART6_InChar (void)
	{
		while(!(USART6_SR & (0x1<<5)))//check 5th bit (RXNE) value
		{
			;
		}
		
		return (USART6_DR&0xFF);
		
	}
	
	
	
	
	
	
