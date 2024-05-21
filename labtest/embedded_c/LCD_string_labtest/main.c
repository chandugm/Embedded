#include "header.h"
int cn=0;
int main()
{
	
	EXTI_init();
	GPIOB_C_init();
	NVIC_init();

	LCD_intit();
	while(1)
	{
		if(cn==1)
		{
			LCD_write_cmd(0x01);
			LCD_write_str("INDIA");
			cn=0;
			EXTI_PR |=(0x1<<10); // clear PR bit position 10 rc_w 1
		}
		else if(cn==2)
		{
			LCD_write_cmd(0x01);
			LCD_write_str("IS");
			cn=0;
			EXTI_PR |=(0x1<<10); // clear PR bit position 10 rc_w 1
		}
		else if(cn==3)
		{
			LCD_write_cmd(0x01);
			LCD_write_str("A");
			cn=0;
			EXTI_PR |=(0x1<<10);
		}
		else if(cn==4)
		{
			LCD_write_cmd(0x01);
			LCD_write_str("GREAT");
			cn=0;
			EXTI_PR |=(0x1<<10); // clear PR bit position 10 rc_w 1
		}

		else if(cn==5)
		{
			LCD_write_cmd(0x01);
			LCD_write_str("COUNTRY");
			cn=0;
			EXTI_PR |=(0x1<<10); // clear PR bit position 10 rc_w 1
		}
	

}
	}
void EXTI15_10_IRQHandler(void)
{
	if ((EXTI_PR	&=(0x1<<10)))//checking PR bit position 10 1
	{
		cn++;
		delay(1150);	
	}
	
}


