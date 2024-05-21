/*
Airplane wing Lights blinking Delays: 
USER LED1 (GREEN): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically.
USER LED2 (RED): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.*/

#define RCC_AHB1ENR  *(volatile int*) 0x40023830 // physical Address of RCC 
#define GPIOB_MODE   *(volatile int*) 0x40020400 // physical Address of GPIOB_MODE
#define GPIOB_ODR    *(volatile int*) 0x40020414 //physical Address of GPIOB_ODR
void delay(int n)
		{
	int i;
		for (i=0;i<2666*n;i++);//delay function 
	}
int main()
{
	
	RCC_AHB1ENR |= ((0x1)<<1); //Set PORT-B(bit position 1) in RCC
	GPIOB_MODE  &= (0xC3FFFFFF); //Clear 26,27 positions in mode 
	GPIOB_MODE  |= (0x14000000); //load 01 in 27,26 to select output mode
	while(1) //super LOOP
	{
		
	  GPIOB_ODR &=~(0x1<<14 | 0x1<<13);//Negetive logic to blink LED clear 13th position
		delay(50);
		GPIOB_ODR |= (0x1<<14 | 0x1<<13);
		delay(50);
		GPIOB_ODR &=~(0x1<<14 );
		delay(50);
		GPIOB_ODR |= (0x1<<13);
		delay(150);
		GPIOB_ODR &= ~(0x1<<13 | 0x1<<14);
		delay(50);
		GPIOB_ODR |=(0x1<<13 | 0x1<<14);
		delay(150);
		GPIOB_ODR |= (0x1<<13 );
		delay(350);
		
	}
}

