IOT Smart Weather Project v2.0:
Draw Block Diagram, pseudo code, Flowchart and write an Embedded C program below tasks. 
Task 1: Read date & time from DS1307 RTC and write in to LCD every 1 sec delay.
Task 2: Read temperature from LM35 Temperature sensor every 5 sec delay.
Task 3: Write temperature along with timestamp in to EEPROM whenever internet is not 
working
Task 4: Temperature writes in to LCD and sends to Kernel Masters webserver using ESP8266
Wi-Fi Module.
LCD Output:
		H H : M M : S S  T : x x D C
		D D / M M / Y Y  O K
Xx -> Temperature value 
D -> Degree symbol
C -> Centigrade
Hint: To check internet status using AT+CIPSTATUS command output. If internet is working this 
command output is OK otherwise this command sends ERROR output. 
Test Environment: Connect Wi-Fi module with your mobile phone using mobile hot spot. In 
your mobile phone disable or enable mobile data and test both conditions.
