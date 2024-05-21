/*
Lab Experiment 8: Write a program Request an interrupt on the Falling edge of ENTER Switch, whenever the user 
button is pressed and increment a counter in the interrupt and RED LED is ON.
*/
#define RCC_AHB1ENR     *(int*) 0x40023830 //physical address of RCC_AHB1ENR
#define RCC_APB2        *(int*) 0x40023844 //physical address of RCC_APB2 
#define GPIOB_MODE      *(int*) 0x40020400 //physical Address of GPIOB_MODE
#define GPIOB_ODR       *(int*) 0x40020414 //physical Address of GPIOB_ODR
#define GPIOC_MODE      *(int*) 0x40020800 //physical Address of GPIOC_MODE
#define SYSCFG_EXTICR3  *(int*) 0x40013810 //physical Address of SYSCFG_EXTICR3
#define EXTI_IMR        *(int*) 0x40013C00 //physical Address of EXTI_IMR
#define EXTI_FTSR			  *(int*) 0x40013C0C //physical Address of EXTI_FTSR
#define EXTI_PR			    *(int*) 0x40013C14 //physical Address of EXTI_PR
#define NVIC_ISER1      *(int*) 0xE000E104  //physical Address of NVIC_ISER1
#define GPIOC_PUPDR  		*(int*) 0x4002080C //physical Address of PUPDR
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

void GPIOB_C_init()
{
	RCC_AHB1ENR |=(0x1<<1);//port-B clock enable
	RCC_AHB1ENR |=(0x1<<2);//port-C clock enable
	GPIOB_MODE  &=(0xF3FFFFFF);//clearing the [27,26] positions
	GPIOB_MODE  |=(0x04000000);//loading 01 to set port-B as output
	GPIOC_PUPDR |= (0x00100000); //PULL-UP resistor port c
}

int flag=0,cn=0;
int main()
{
	EXTI_init();
	GPIOB_C_init();
	NVIC_init();
	while(1)
	{
		if(flag==1)
		{
			flag=0;
			GPIOB_ODR ^=(0x1<<13); //Toggle RED LED
		}
	}
}

	void EXTI15_10_IRQHandler(void)
{
	if ((EXTI_PR	&=(0x1<<10)))//checking PR bit position 10 1
	{
		flag=1; 
		cn++;
		EXTI_PR |=(0x1<<10); // clear PR bit position 10 rc_w 1
		
	}
}
