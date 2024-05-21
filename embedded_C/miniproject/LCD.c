/*
Write Higher Nibble data in to LCD. 
Return Value: No return Value; Argument: unsigned char data
void write_high_nibble( unsigned char data );
Write Lower Nibble data in to LCD. 
Return Value: No return Value; Argument: unsigned char data 
void write_low_nibble( unsigned char data );
LCD Initialization. 
Return Value: No return Value; Argument: No Argument 
void KM_LCD_Init(void);
Write a LCD command. 
Return Value: No return Value; Argument: unsigned char 
void KM_LCD_Write_Cmd( unsigned char );
Write a LCD Data (single character). 
Return Value: No return Value; Argument: unsigned char 
void KM_LCD_Write_Data( unsigned char );
Write a LCD Data (Multiple characters). 
Return Value: No return Value; Argument: character pointer 
void KM_LCD_Write_Str(char *);
*/
#define RCC_AHB1ENR  *(volatile int*) 0x40023830 // physical Address of RCC 
#define GPIOB_MODE   *(volatile int*) 0x40020400 // physical Address of GPIOB_MODE
#define GPIOB_ODR   (*(volatile int *)(0x40020414))//physical Address of GPIOB_ODR

//**************Dealy Function*************************
void delay(int n)
{
	int i;
	for (i=0;i<2600*n;i++);
}

//**************Writing higher nibble data***************
void write_high_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);
	GPIOB_ODR|=(data>>4&0x0F);
	GPIOB_ODR|=(0x1<<8);
	delay(10);
	GPIOB_ODR&=(~(0x1<<8));
	//delay(10);
}

//**************Writing lower nibble data****************
void write_lower_nibble(unsigned char data)
{
	GPIOB_ODR&=~(0x0F);
	GPIOB_ODR|=(data&0x0F);
	GPIOB_ODR|=(0x1<<8);
	delay(10);
	GPIOB_ODR&=(~(0x1<<8));
	//delay(10);
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
	//LCD_write_cmd(0x01);//clearing First line
}
int main()
{
	RCC_AHB1ENR |=(0x1<<1);//Enableing PORT-B Clock
	GPIOB_MODE &=(0xFFFCF000);//clearing 0,1,2,3,4,5,8
	GPIOB_MODE |=(0x00010555);//Loading '01' to make ports as output mode
	LCD_intit();
	LCD_write_str("abcdefghijklmnop");
	LCD_write_cmd(0xC4);
	LCD_write_str("THINE");	
}
