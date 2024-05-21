/* 
Toggle PB13 (RED LED) every 100 msec delay using SysTick timer using 16 MHZ system clock source.
     And also test minimum and maximum delays of 16MHZ timer.
Draw flowcharts and write an embedded C program for the below 2 methods
a: polling method
b. interrupt method
*/
//wtite Embedded_C programme to blink RED LED every 100msec
#define RCC_AHB1ENR  *(volatile int*) 0x40023830 // physical Address of RCC 
#define GPIOB_MODE   *(volatile int*) 0x40020400 // physical Address of GPIOB_MODE
#define GPIOB_ODR    *(volatile int*) 0x40020414 //physical Address of GPIOB_ODR
#define STK_CTRL     *(volatile int*) 0xE000E010 //physical Address of STK_CTRL 
#define STK_LOAD     *(volatile int*) 0xE000E014 ////physical Address of STK_LOAD

int main()
{
	
	RCC_AHB1ENR |= ((0x1)<<1); //Set PORT-B(bit position 1) in RCC
	GPIOB_MODE  &= (0xF3FFFFFF); //Clear 26,27 positions in mode 
	GPIOB_MODE  |= (0x04000000); //load 01 in 27,26 to select output mode
	STK_CTRL		|= (0x1<<2);//set 2nd bit in STK_CTRL for 16MHz frequency
	STK_CTRL		&= ~(0x1<<1);//clearing first bit to select polling method
	STK_LOAD 		 =1600000-1;//loading 1600000 to
	while(1) //super LOOP
	{
	GPIOB_ODR &=~(0x1<<13 );//Negetive logic to blink LED clear 13th position
	STK_CTRL		|= (0x01<<0);//set 0th bit in STK_CTRL to start the counter 
		
	while(!(STK_CTRL	& (0x1<<16)))//checking 16th bit if the counter reach to ZERO set counter flag
	{
	}
	
	GPIOB_ODR |= (0x1<<13 ); //To Stop LED
	STK_CTRL		|= (0x1<<0);//set 0th bit in STK_CTRL to start the counter 
	
	while(!(STK_CTRL		& (0x1<<16)))//checking 16th bit if the counter reach to ZERO  set counter flag
	{
	}
  }
}





	
	
