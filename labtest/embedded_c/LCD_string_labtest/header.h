#define RCC_AHB1ENR     *(int*) 0x40023830 //physical address of RCC_AHB1ENR
#define RCC_APB2        *(int*) 0x40023844 //physical address of RCC_APB2 
#define GPIOB_MODE      *(int*) 0x40020400 //physical Address of GPIOB_MODE
#define GPIOB_ODR       *(int*) 0x40020414 //physical Address of GPIOB_ODR
#define GPIOC_MODE      *(int*) 0x40020800 //physical Address of GPIOC_MODE
#define GPIOC_IDR       *(int*) 0x40020810 //  Physical address of GPIOC_IDR
#define SYSCFG_EXTICR3  *(int*) 0x40013810 //physical Address of SYSCFG_EXTICR3
#define EXTI_IMR        *(int*) 0x40013C00 //physical Address of EXTI_IMR
#define EXTI_FTSR			  *(int*) 0x40013C0C //physical Address of EXTI_FTSR
#define EXTI_PR			    *(int*) 0x40013C14 //physical Address of EXTI_PR
#define NVIC_ISER1      *(int*) 0xE000E104  //physical Address of NVIC_ISER1
#define GPIOC_PUPDR  		*(int*) 0x4002080C //physical Address of PUPDR
void write_high_nibble(unsigned char data);
void write_lower_nibble(unsigned char data);
void LCD_write_cmd(unsigned char a);
void LCD_write_data(unsigned char a);
void LCD_write_str(char *str);
void LCD_intit(void);
void GPIOB_C_init(void);
void EXTI_init(void);
void NVIC_init(void);
void delay(int n);


