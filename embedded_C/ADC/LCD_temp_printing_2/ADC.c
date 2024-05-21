#include "stm32f401rbt6.h"
#include "systicktimer.h"
#include "LCD.h"
#include "ADC.h"

int pot_value,temp,LM,flag=0;
	void ADC_Mux_init(void)
	{
	//RCC_Configiration
	RCC_AHB1ENR |=(0x1<<2);//port-C clock enable
	RCC_APB2 |=(0x1<<8);//set 8th bit for ADC1 clk
		
	//GPIOC Configuration
	GPIOC_MODE&=0xFFFFFFFC;//clearing 0,1 bit fields
	GPIOC_MODE|=0x00000003;//loading '11' to select as analog mode
	
	}
	void ADC_init(void)
	{
	
	//ADC
	ADC_SQR3|=10<<0; // Set channels  10 for conversion
	ADC_CR1 |=(0x1<<8);//Enable scan mode in ADC_CR1 8th bit
	ADC_CR1 |=(0x1<<5);//Enable EOCIE bit in ADC_CR1 register to enable End Of Conversion interrupt
	ADC_CR2 |=(0x1<<0);//setting 0th bit to enable ADC_ON
	ADC_CR2 |=(0x1<<10);//Enable EOCS

		
	//NVIC
		NVIC_ISER0|=0x1<<18;//selecting interrupt ADC1 in NVIC
	
	}
	
	//interrupt handular
	void ADC_IRQHandler (void)
{
	if(ADC_SR & (0x1<<1))//Checking EOC 
	{
	//transfering Data register to global variable
		LM=ADC_DR;//assign value to temp variable
		temp=((LM*3100)/10)/4096;//formulae to convert to degrees
		flag=1;
		//clearing SR 1st bit
		ADC_SR&=~(0x1<<1);//clearing SR_EOC bit field
	}
}

	


