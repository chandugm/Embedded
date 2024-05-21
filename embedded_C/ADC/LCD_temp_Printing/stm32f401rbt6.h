
// RCC Registers
#define RCC_AHB1ENR     *(int*) 0x40023830 //physical address of RCC_AHB1ENR
#define RCC_APB2        *(int*) 0x40023844 //physical address of RCC_APB2 

// GPIO B Registers
#define GPIOB_MODE      *(int*) 0x40020400 //physical Address of GPIOB_MODE
#define GPIOB_ODR       *(int*) 0x40020414 //physical Address of GPIOB_ODR
	
//GPIO C Registers
#define GPIOC_MODE     *((int*)0x40020800)//physical Address of GPIOC_MODE
	
// System Tick Timer Registers
#define STK_CTRL     *(int*) 0xE000E010 //physical Address of STK_CTRL 
#define STK_LOAD     *(int*) 0xE000E014 ////physical Address of STK_LOAD
#define STK_VAL 	   *(int*) 0xE000E018 ////physical Address of STK_LOAD

//NVIC registers
#define NVIC_ISER0      *(int*) 0xE000E100  //physical Address of NVIC_ISER0
#define NVIC_ISER1      *(int*) 0xE000E104  //physical Address of NVIC_ISER1
	
//ADC registers
#define ADC_SR					*(int*) 0x40012000 //physical address of ADC_SR
#define ADC_CR1					*(int*) 0x40012004 //physical address of ADC_CR1
#define ADC_CR2					*(int*) 0x40012008 //physical address of ADC_CR2
#define ADC_SQR1				*(int*) 0x4001202C //physical address of ADC_SQR1
#define ADC_SQR3				*(int*) 0x40012034 //physical address of ADC_SQR3
#define ADC_DR   				*(int*) 0x4001204C //physical address of ADC_DR
#define ADC_SMPR1   		*(int*) 0x4001200C //physical address of ADC_DR

