/*Experiment 1: USART Polling 
Write a pseudo code and Embedded C program to Configure UART2 with 9600 8N1.
And transmit character ‘A’ and Receive same character using hardware Loop back.
a. System Clock Initialization to 16MHZ.
b. UART Communication protocol specifications –
9600 8N1 = 1 start bit+8 word length +parity(0 bit)+ 1 stop bit = 10 bits.
c. Enable polling (nothing but disable UART Interrupts)
Baud Rate = System clock/8*(2-0)*USARTDIV
USARTDIV = System clock/8*(2-0)*BaudRate = 16000000/16*9600 = 
16000000/(16*9600)=104.1875 ==> 104+0.18==>68(integral part)*/

#include "stm32f401rbt6.h"
#include "UART.h"
char ch ='C';
char receive;
int main()
{
	UART_polling();
	
	while (1)
	{
		UART2_OutChar(ch);
		ch=UART2_InChar();	
}
}
