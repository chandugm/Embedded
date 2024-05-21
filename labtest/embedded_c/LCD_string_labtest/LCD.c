/*Write a program to detect the number of presses on a enter switch and determine the 
corresponding word from the sentence “INDIA IS A GREAT COUNTRY”. 
Display this word on the LCD screen. For example, if the number of presses is 2, the program should print “IS” on the LCD.*/

#include "header.h"
void delay(int n)
{
	int i;
	for (i=0;i<2900*n;i++);
}

//**************Writing higher nibble data***************
void write_high_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);
	GPIOB_ODR|=(data>>4&0x0F);
	GPIOB_ODR|=(0x1<<8);
	delay(10);
	GPIOB_ODR&=(~(0x1<<8));
	delay(10);
}

//**************Writing lower nibble data****************
void write_lower_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);
	GPIOB_ODR|=(data&0x0F);
	GPIOB_ODR|=(0x1<<8);
	delay(10);
	GPIOB_ODR&=(~(0x1<<8));
	delay(10);
}


//****************LCD write Command************************
void LCD_write_cmd(unsigned char a)
{
	GPIOB_ODR&=~(0x1<<4);//set RS=0 For command register
	write_high_nibble(a);
	write_lower_nibble(a);
}
//*************Writing data into LCD******************
void LCD_write_data(unsigned char a)
{
	GPIOB_ODR|=(0x1<<4);//Set RS=1 For data register
	write_high_nibble(a);
	write_lower_nibble(a);
}
//**************Sending Character by Character***********
void LCD_write_str(char *str)
{
	int i;
	for (i=0;i<str[i]!='\0';i++)
	{
		LCD_write_data(str[i]);//sending character by Character
	}
}
	 

//******************LCD Intialization**********************
void LCD_intit(void)
{
	delay(20);
	LCD_write_cmd(0x33);
	delay(1);
	LCD_write_cmd(0x32);
	LCD_write_cmd(0x0C);
	LCD_write_cmd(0x01);
	LCD_write_cmd(0x80);//Selecting First Line
	LCD_write_cmd(0x01);
}

void GPIOB_C_init(void)
{
	RCC_AHB1ENR |=(0x1<<1);//port-B clock enable
	RCC_AHB1ENR |=(0x1<<2);//port-C clock enable
	GPIOB_MODE &=(0xFFFCF000);//clearing 0,1,2,3,4,5,8
	GPIOB_MODE |=(0x00010555);//Loading '01' to make ports as output mode
	GPIOC_PUPDR |= (0x00100000); //PULL-UP resistor port c
}
void EXTI_init(void)
{
	RCC_APB2 |=(0x1<<14);//set 14th bit
	SYSCFG_EXTICR3&=0xFFFFF0FF;//clear 11,10,9,8
	SYSCFG_EXTICR3|=0x00000200;//load 0010
	EXTI_FTSR |=(0x1<<10);//set TR10 bit falling edge
	EXTI_IMR  |=(0x1<<10);//set MR10 bit
	
}
void NVIC_init()
{
	NVIC_ISER1 |=(0x1<<8);//set 8bit[40th in vector table]
}



