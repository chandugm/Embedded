#include "systicktimer.h"
#include "UART.h"
#include "wifi.h"
#include <stdio.h>
extern int temp;
char buffer[1000], Fetch[50];
void ESP8266_init(void)
{
	//ESP8266 Initialization:
	UART6_OutChar_str("AT\r\n");//sending AT command
	while ((wifi__response())!=0)
		UART6_OutChar_str("AT\r\n");

	//	ESP8266 Reset
	UART6_OutChar_str("AT+RST\r\n");//sending AT command
	KM_mdelay(500);
	
	//ESP8266_SetWifiMode
	UART6_OutChar_str("AT+CWMODE=3\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CWMODE=3\r\n");
	
	//ESP8266_JoinAccessPoint
	UART6_OutChar_str("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");//sending AT c
	
	//ESP8266_GetIPAddress
	UART6_OutChar_str("AT+CIFSR\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIFSR\r\n");
		
	//ESP8266_SetConnectionMux
	UART6_OutChar_str("AT+CIPMUX=0\r\n");//sending AT command
  while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPMUX=0\r\n");//sending AT command
	
	//UART6_OutChar_str("AT+CWLAP\r\n");//sending AT command
	//KM_mdelay(5000);
	
	// ESP8266_SetDataTransmissionMode
	UART6_OutChar_str("AT+CIPMODE=0\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPMODE=0\r\n");//sending AT command
}
void ESP8266_Tx(void)
{
	//ESP8266_GetStatus
	UART6_OutChar_str("AT+CIPSTATUS\r\n");//sending AT command
 while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPSTATUS\r\n");
 
 //ESP8266_MakeTCPConnection
	UART6_OutChar_str("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");//sending AT command
	while((wifi__response())!=0)
		UART6_OutChar_str("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");//sending AT command
	
	//ESP8266_SendTcp
	UART6_OutChar_str("AT+CIPSEND=40\r\n");//sending AT command
	KM_mdelay(500);
	sprintf(Fetch,"GET /page.php?temp=%d&hum=70&dev=11\r\n\r\n", temp);
	KM_mdelay(5000);
	UART6_OutChar_str(Fetch);
	
	//ESP8266_CloseTCPConnection
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
		buffer[i]=UART6_InChar();//reading from inchar fun()
		if (buffer[i]=='K' && buffer [i-1]=='O')//checking ok in buffer
		{
			return 0;
		}
	}
	return 1;
}

