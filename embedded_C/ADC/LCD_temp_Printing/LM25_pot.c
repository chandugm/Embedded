#include "stm32f401rbt6.h"
#include "systicktimer.h"
#include "header.h"

int pot_value,temp;
	void LM_init(void)
	{
	//RCC_Configiration
	RCC_AHB1ENR |=(0x1<<2);//port-C clock enable
	RCC_APB2 |=(0x1<<8);//set 8th bit for ADC1 clk
	
	//GPIOC Configuration
	GPIOC_MODE&=0xFFFFFFF0;//clearing 2,3 bit fields
	GPIOC_MODE|=0x0000000F;//loading '11' to select as analog mode
	
	//ADC
	ADC_SQR1|=0x1<<20;//LOad value 2
	ADC_SQR3|=(10 << 0) | (11 << 5); // Set channels 10 and 11 for conversion
	ADC_CR1 |=(0x1<<8);//Enable scan mode in ADC_CR1 8th bit
	ADC_CR1 |=(0x1<<5);//Enable EOCIE bit in ADC_CR1 register to enable End Of Conversion interrupt
	ADC_CR2 |=(0x1<<0);//setting 0th bit to enable ADC_ON
	ADC_CR2 |=(0x1<<10);//Enable EOCS
		
	//NVIC
		NVIC_ISER0|=0x1<<18;//selecting interrupt ADC1 in NVIC
	//SWSTART
		ADC_CR2 |=0x1<<30;//set 30th bit SWSTART	
		while(1)
		{
			;
		}
}
	
	//interrupt handular
	void ADC_IRQHandler (void)
{
	if(ADC_SR & (0x1<<1))//Checking EOC 
	{
		temp=ADC_DR;//assign value to temp variable
		temp=((temp*3100)/10)/4096;//formulae to convert to degrees
		pot_value=ADC_DR;//assaign value to  pot_value variable
		
		//printing in LCD
		LCD_write_str("Temperature:");
	  i_2_a_LCD(temp);//convertin i to A
		LCD_write_data(0xDF);//printing degree symbol
	  LCD_write_str("C");
	  LCD_write_cmd(0xC0);//second line select
	  LCD_write_str("Pot_value:");
	  i_2_a_LCD(pot_value);
		LCD_write_data(0xF4);//printing ohm symbol
		
		//clearing SR 1st bit
		ADC_SR&=~(0x1<<1);//clearing SR_EOC bit field
		KM_mdelay(500);//delay
	}
		

	
}
	


