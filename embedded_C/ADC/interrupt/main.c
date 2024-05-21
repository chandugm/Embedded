#include "stm32f401rbt6.h"
#include "systicktimer.h"
int pot_value=0;
int main()
{
	//RCC_Configiration
	RCC_AHB1ENR |=(0x1<<2);//port-C clock enable
	RCC_APB2 |=(0x1<<8);//set 8th bit for ADC1 clk
	
	//GPIOC Configuration
	GPIOC_MODE&=0xFFFFFFF3;//clearing 2,3 bit fields
	GPIOC_MODE|=0x0000000C;//loading '11' to select as analog mode
	
	//ADC
	ADC_SQR3	|=0x0000000B;//loading '1011'(11) in 4-0 bit fields
	ADC_CR1 |=(0x1<<5);//Enable EOCIE bit in ADC_CR1 register to enable End Of Conversion interrupt
	ADC_CR2 |=(0x1<<10);//setting 10th bit to enable EOCS
	ADC_CR2 |=(0x1<<0);//setting 0th bit to enable ADC_ON
	
	//NVIC
		NVIC_ISER0|=0x1<<18;//selecting interrupt ADC1 in NVIC
	
	while(1)
	{
		ADC_CR2 |=(0x1<<30);//set 30th bit to start SWSTART		
	}
}
void ADC_IRQHandler (void)
{
	if(ADC_SR & (0x1<<1))//reading 1th bit
	{
		pot_value=ADC_DR;
		KM_mdelay(500);
		ADC_SR&=~(0x1<<1);
	}
}
