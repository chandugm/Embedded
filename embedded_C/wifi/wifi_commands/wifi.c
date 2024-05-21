#include "systicktimer.h"
#include "UART.h"
#include "wifi.h"
char buffer[1000];int res;
void ESP8266_init(void)
{
	UART6_OutChar_str("AT\r\n");//sending AT command
	while ((wifi__response())!=0)
		UART6_OutChar_str("AT\r\n");
	
	UART6_OutChar_str("AT+RST\r\n");//sending AT command
	KM_mdelay(500);
	
	UART6_OutChar_str("AT+CWMODE=3\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CWMODE=3\r\n");
	
	UART6_OutChar_str("AT+CIFSR\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIFSR\r\n");
	
	UART6_OutChar_str("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");//sending AT c
	
	UART6_OutChar_str("AT+CIPMUX=0\r\n");//sending AT command
  while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPMUX=0\r\n");//sending AT command
	
	//UART6_OutChar_str("AT+CWLAP\r\n");//sending AT command
	//KM_mdelay(5000);
	UART6_OutChar_str("AT+CIPMODE=0\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPMODE=0\r\n");//sending AT command
}
void ESP8266_Tx(void)
{
	
	UART6_OutChar_str("AT+CIPSTATUS\r\n");//sending AT command
 while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPSTATUS\r\n");
	UART6_OutChar_str("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");//sending AT command
	UART6_OutChar_str("AT+CIPSEND=40\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("GET /page.php?temp=40&hum=50&dev=11\r\n\r\n");
	KM_mdelay(4000);
	UART6_OutChar_str("AT+CIPCLOSE=41\r\n");//sending AT command
	while((wifi__response())!=0)
			UART6_OutChar_str("AT+CIPCLOSE=41\r\n");
	
}

//this function used to vheck response if command pass return 0
//else if the command fails return 1
int wifi__response(void)
{
int i;
	for (i=0;i<=1000;i++)
	{
		buffer[i]=UART6_InChar();
		if (buffer[i]=='K' && buffer [i-1]=='O')
		{
			return 0;
		}
	}
	return 1;
}

