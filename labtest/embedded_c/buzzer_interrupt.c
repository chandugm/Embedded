/*Write an Embedded C Program Whenever SW_UP press Buzzer is ON, whenever SW_DN press 
Buzzer is ON using Falling edge GPIO interrupt.*/

//clock
#define RCC_AHB1ENR     *(int*) 0x40023830 //physical address of RCC_AHB1ENR
#define RCC_APB2        *(int*) 0x40023844 //physical address of RCC_APB2 
	
//port B
#define GPIOB_MODE      *(int*) 0x40020400 //physical Address of GPIOB_MODE
#define GPIOB_ODR       *(int*) 0x40020414 //physical Address of GPIOB_ODR
	
//port C
#define GPIOC_PUPDR  		*(int*) 0x4002080C //physical Address of PUPDR
#define GPIOC_MODE      *(int*) 0x40020800 //physical Address of GPIOC_MODE
	
//system config
#define SYSCFG_EXTICR3  *(int*) 0x40013810 //physical Address of SYSCFG_EXTICR3
	
//interrupt EXTI 
#define EXTI_IMR        *(int*) 0x40013C00 //physical Address of EXTI_IMR
#define EXTI_FTSR			  *(int*) 0x40013C0C //physical Address of EXTI_FTSR
#define EXTI_PR			    *(int*) 0x40013C14 //physical Address of EXTI_PR
	
//NVIC
#define NVIC_ISER0      *(int*) 0xE000E100  //physical Address of NVIC_ISER1

void EXTI_init(void)
{
	RCC_APB2 |=(0x1<<14);//set 14th bit
	SYSCFG_EXTICR3&=0xFFFFFF00;//clear port-9[7,6,5,4] port-8[3,2,1,0]
	SYSCFG_EXTICR3|=0x00000022;//load 0010 in PORT-8 and PORT-9 Positions
	EXTI_FTSR |=(0x1<<8 |0x1<<9 );//set TR8 & TR9 bit falling edge
	EXTI_IMR  |=(0x1<<8 |0x1<<9);//set MR8 & MR9 bit
	
}
void NVIC_init()
{
	NVIC_ISER0 |=(0x1<<23);//set 23rd as per vector table	
}

void GPIOB_C_init()
{
	RCC_AHB1ENR |=(0x1<<1);//port-B clock enable
	RCC_AHB1ENR |=(0x1<<2);//port-C clock enable
	GPIOB_MODE  &= (0xFCFFFFFF);//clearing the [25,24] positions
	GPIOB_MODE  |= (0x01000000);//loading 01 to set port-B as output
	GPIOC_PUPDR |= (0x00050000); //PULL-UP resistor port c
}

int flag1=0,cn=0,flag2=0,cn1=0;
int main()
{
	EXTI_init();
	GPIOB_C_init();
	NVIC_init();
	//GPIOB_ODR &=~(0x1<<12);
	while(1)
	{
		if(flag1==1)
		{
			flag1=0;
			GPIOB_ODR |=(0x1<<12); //ON Buzzer on
		}
		else if(flag2==1)
		{
			flag2=0;
			GPIOB_ODR &=~(0x1<<12); //ON Buzzer off
		}
	}
}

	void EXTI9_5_IRQHandler(void)
{
	if ((EXTI_PR	&=(0x1<<8)))//checking PR bit position 8
	{
		flag1=1; 
		cn++;
		EXTI_PR |=(0x1<<8); // clear PR bit position 8
		
	}
	else if ((EXTI_PR	&=(0x1<<9)))//checking PR bit position 9
	{
		flag2=1; 
		cn1++;
		EXTI_PR |=(0x1<<9); // clear PR bit position 9
}
	}
