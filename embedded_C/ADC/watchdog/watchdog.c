#include "stm32f401rbt6.h"
int pot_value;
void watch_dog(void)
{
//RCC_Configiration
	RCC_AHB1ENR |=(0x1<<1);//port-B clock enable
	RCC_AHB1ENR |=(0x1<<2);//port-C clock enable
	RCC_APB2 |=(0x1<<8);//set 8th bit for ADC1 clk
	
	//GPIOB Configuration
	GPIOB_MODE &=0xFCFFFFFF;//clearing 24,25 bits
	GPIOB_MODE |=0x01000000;//Enable PB12 for buzzer 
	
	
	//GPIOC Configuration
	GPIOC_MODE|=0x0000000C;//loading '11' to select as analog mode in 2,3
	
	//ADC
	ADC_SQR3=10<<0; //loading '1011' into SQR3 register
	ADC_HTR=2000;//loading high threshold value
	ADC_LTR=1000;//loading low threshold value
	ADC_CR1 &=  0xFFFFFFE0;//Clearing watch dog channel 11
	ADC_CR1 |=  0x0000000B;//selecting watch dog channel 11
	ADC_CR1 |= (0x1<<5);//Enable EOCIE bit in ADC_CR1 register to enable End Of Conversion interrupt
	ADC_CR2 |= (0x1<<0);//setting 0th bit to enable ADC_ON
		
	//NVIC
	NVIC_ISER0|=0x1<<18;//selecting interrupt ADC1 in NVIC
	GPIOB_ODR &=~(0x1<<12);		
	while(1)
	{
		ADC_CR2 |=0x1<<30;//set 30th bit SWSTART
	}
}
	
	//interrupt handular
	void ADC_IRQHandler (void)
{

	pot_value=ADC_DR;//assign value to  pot_value variable
	if((pot_value>=ADC_LTR) &&  (pot_value<=ADC_HTR))//Checking threshold values of watch_dog timer 
	{
		GPIOB_ODR &=~(0x1<<12);//buzzer OFF
			
	}
	else
	{
		GPIOB_ODR |=(0x1<<12);//Buzzer ON
	}

}


