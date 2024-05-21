/*Lab Experiment 3: Whenever SW_UP is pressed RED LED is ON, whenever SW_DN is pressed GREEN LED is ON.
Assign breakpoints after if condition and click run button in debugger window. Whenever SW1/SW2 presses 
program stops at any one of the breakpoint.*/

#define RCC_AHB1ENR  *(volatile int*) 0x40023830 // physical Address of RCC 
#define GPIOB_MODE   *(volatile int*) 0x40020400 // physical Address of GPIOB_MODE
#define GPIOC_MODE   *(volatile int*) 0x40020800 //
#define GPIOC_IDR    *(volatile int*) 0x40020810 //
#define GPIOB_ODR    *(volatile int*) 0x40020414 //physical Address of GPIOB_ODR
#define GPIOC_PUPDR  *(volatile int*) 0x4002080C //physical Address of GPIOC_PUPDR
int main()
{
	
	RCC_AHB1ENR |= ((0x1)<<1); //Set PORT-B(bit position 1) in RCC
	RCC_AHB1ENR |= ((0x1)<<2); //Set PORT-C(bit position 2) in RCC
	GPIOB_MODE  &= (0xC3FFFFFF); //Clear [29,28],[27,26] 
	GPIOB_MODE  |= (0x14000000); //load 01 in [29,28],[27,26] to select output mode
	GPIOC_PUPDR |= (0x00050000); //PULL-UP resistor
	GPIOB_ODR |=(0x1<<13 );
	GPIOB_ODR |=(0x1<<14 );
	while(1) //super LOOP
	{
		if(!(GPIOC_IDR & (0x1<<8)))
					GPIOB_ODR &=~(0x1<<13 );//Negetive logic to blink LED clear 13th position
		else if(!(GPIOC_IDR & (0x1<<9)))
					GPIOB_ODR &=~(0x1<<14); //Green LED is ON
		
		
	}
}





	
	
