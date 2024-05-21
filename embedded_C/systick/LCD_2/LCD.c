#include "stm32f401rbt6.h"
#include "systicktimer.h"
//**************Writing higher nibble data***************
void write_high_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);//clearing lower byte data
	GPIOB_ODR|=(data>>4&0x0F);//shifting data 4 times 
	GPIOB_ODR|=(0x1<<8);//Enabling port-B 8th bit
	KM_mdelay(2);//delay 
	GPIOB_ODR&=(~(0x1<<8));//disable enable port-B 8th bit 
	
}

//**************Writing lower nibble data****************
void write_lower_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);//clearing lower byte data
	GPIOB_ODR|=(data&0x0F);//data loading to ODR
	GPIOB_ODR|=(0x1<<8);//Enabling port-B 8th bit
	KM_mdelay(2);//delay 
	GPIOB_ODR&=(~(0x1<<8));//disable enable port-B 8th bit 

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
void LCD_init(void)
{
	RCC_AHB1ENR |=(0x1<<1);//port-B clock enable
	GPIOB_MODE &=(0xFFFCF000);//clearing 0,1,2,3,4,5,8
	GPIOB_MODE |=(0x00010555);//Loading '01' to make ports as output mode
	
//*******************Intialization to send nibble by nibble data***********	
	KM_mdelay(20);
	LCD_write_cmd(0x33);
	KM_mdelay(1);
	LCD_write_cmd(0x32);
	LCD_write_cmd(0x0C);
	LCD_write_cmd(0x01);//clearing screen
	LCD_write_cmd(0x80);//Selecting First Line
	LCD_write_cmd(0x01);//clearing screen
}


