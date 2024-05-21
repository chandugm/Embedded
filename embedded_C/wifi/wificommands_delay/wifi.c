#include "systicktimer.h"
#include "UART.h"
void ESP8266_init(void)
{
	UART6_OutChar_str("AT\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("AT+RST\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("AT+CWMODE=3\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("AT+CIFSR\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");//sending AT command
	KM_mdelay(1000);
	UART6_OutChar_str("AT+CIPMUX=0\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("AT+CWLAP\r\n");//sending AT command
	KM_mdelay(1000);
	UART6_OutChar_str("AT+CIPMODE=0\r\n");//sending AT command
	
}
void ESP8266_module(void)
{
	KM_mdelay(500);
	UART6_OutChar_str("AT+CIPSTATUS\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");//sending AT command
	KM_mdelay(500);
	KM_mdelay(500);
	UART6_OutChar_str("AT+CIPSEND=40\r\n");//sending AT command
	KM_mdelay(500);
	UART6_OutChar_str("GET /page.php?temp=40&hum=50&dev=11\r\n\r\n");
	KM_mdelay(8000);
	UART6_OutChar_str("AT+CIPCLOSE=41\r\n");//sending AT command	
}

