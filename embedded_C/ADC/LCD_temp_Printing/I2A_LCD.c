#include <string.h>
#include "systicktimer.h"
#include "stm32f401rbt6.h"
//**************Writing higher nibble data***************
void write_high_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);
	GPIOB_ODR|=(data>>4&0x0F);
	GPIOB_ODR|=(0x1<<8);
	KM_mdelay(2);
	GPIOB_ODR&=(~(0x1<<8));
}

//**************Writing lower nibble data****************
void write_lower_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);
	GPIOB_ODR|=(data&0x0F);
	GPIOB_ODR|=(0x1<<8);
	KM_mdelay(2);
	GPIOB_ODR&=(~(0x1<<8));
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

//*************integer to ASCII***********************

void i_2_a_LCD(int n)
{
	int i=0,j,rem,len;
	char str[100];
while(n>0)
{
	rem=n%10;
	str[i]=rem+'0';
	n=n/10;
	i++;
}
str[i]='\0';
len=strlen(str);
for (i=0,j=len-1;i<len/2;i++,j--)
{
	char temp=str[i];
	str[i]=str[j];
	str[j]=temp;
}
LCD_write_str(str);//calling function
}
	 

//******************LCD Intialization**********************
void LCD_intit(void)
{
	RCC_AHB1ENR |=(0x1<<1);//Enableing PORT-B Clock
	GPIOB_MODE &=(0xFFFCF000);//clearing 0,1,2,3,4,5,8
	GPIOB_MODE |=(0x00010555);//Loading '01' to make ports as output mode
	KM_mdelay(20);
	LCD_write_cmd(0x33);
	KM_mdelay(1);
	LCD_write_cmd(0x32);
	LCD_write_cmd(0x0C);
	LCD_write_cmd(0x01);
	LCD_write_cmd(0x80);//Selecting First Line
}

