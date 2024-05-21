
 
 /*Lab Experiment 6: Read SW_ENT, if switch is press RED LED is ON otherwise RED LED is OFF. Note that RED LED 
should remain ON for the duration switch is kept pressed i.e. RED LED should turn OFF when switch is released.*/
#define RCC_AHB1ENR  *(volatile int*) 0x40023830 // physical Address of RCC 
#define GPIOB_MODE   *(volatile int*) 0x40020400 // physical Address of GPIOB_MODE
#define GPIOC_MODE   *(volatile int*) 0x40020800 // Physical address of GPIOC_MODE
#define GPIOC_IDR    *(volatile int*) 0x40020810 //  Physical address of GPIOC_IDR
#define GPIOB_ODR    *(volatile int*) 0x40020414 //physical Address of GPIOB_ODR
#define GPIOC_PUPDR  *(volatile int*) 0x4002080C //physical Address of GPIOC_PUPDR
int count=0;
int i;
void delay(int n)
{
	for(i=0;i<2666*n;i++);
}
int main()
{
	
	RCC_AHB1ENR |= ((0x1)<<1); //Set PORT-B(bit position 1) in RCC
	RCC_AHB1ENR |= ((0x1)<<2); //Set PORT-C(bit position 2) in RCC
	GPIOB_MODE  &= (0xF3FFFFFF); //Clear [27,26] 
	GPIOB_MODE  |= (0x04000000); //load 01 in [27,26] to select output mode
	GPIOC_PUPDR |= (0x00100000); //PULL-UP resistor
	GPIOB_ODR |=(0x1<<13 );
	while(1) //super LOOP
	{
		if(!(GPIOC_IDR & (0x1<<10)))
		{
					GPIOB_ODR &=~(0x1<<13 );//Negetive logic to blink LED clear 13th position
		}
		else
			
		GPIOB_ODR |=(0x1<<13 );
		
	}
	
}

