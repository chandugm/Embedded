
// RCC Registers
#define RCC_AHB1ENR     *(int*) 0x40023830 //physical address of RCC_AHB1ENR
#define RCC_APB2        *(int*) 0x40023844 //physical address of RCC_APB2 

// GPIO B Registers
#define GPIOB_MODE      *(int*) 0x40020400 //physical Address of GPIOB_MODE
#define GPIOB_ODR       *(int*) 0x40020414 //physical Address of GPIOB_ODR

// System Tick Timer Registers
#define STK_CTRL     *(volatile int*) 0xE000E010 //physical Address of STK_CTRL 
#define STK_LOAD     *(volatile int*) 0xE000E014 ////physical Address of STK_LOAD
#define STK_VAL      *(volatile int*) 0xE000E018 ////physical Address of STK_LOAD



