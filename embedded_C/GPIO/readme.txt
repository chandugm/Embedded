1.1. GPIO Ports Configure to Output:

Lab Experiment 1: 
Toggle RED LED ON time is 50ms and RED LED OFF time is 1300ms

Lab Experiment 2: 
Airplane wing Lights blinking Delays: 
USER LED1 (GREEN): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically.
USER LED2 (RED): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.


1.2. GPIO Ports Configure to Input with Polling:

Lab Experiment 3: Whenever SW_UP is pressed RED LED is ON, whenever SW_DN is pressed GREEN LED is ON.
Assign breakpoints after if condition and click run button in debugger window. Whenever SW1/SW2 presses 
program stops at any one of the breakpoint. 

Lab Experiment 4: Use “SW_ENT” and declare “counter” global variable. Your program should increment counter
by one, every time switch is pressed. Note how the value of counter changes on each “ENTER SWITCH” press. Use 
debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always?
Note: Define counter as a global variable and in debug perspective use continuous refresh option (You will find 
Continuous Refresh button on top of the Expression Window). You can use step debugging or breakpoints to check 
the variable value.
Hint: To add variable to Expression Window, select and right click the variable name and select “Add Watch 
Expression”. To view Expression Window, click on View button from Keil menu bar and select Expressions.
Embedded C & RTOS [STM32 Controller] Lab Assignments

Lab Experiment 5: Whenever ENTER SWITCH is Press toggle RED LED.

Lab Experiment 6: Read SW_ENT, if switch is press RED LED is ON otherwise RED LED is OFF. Note that RED LED 
should remain ON for the duration switch is kept pressed i.e. RED LED should turn OFF when switch is released.

Lab Experiment 7: Whenever SW_ENT Press turn ON BUZZER up to 250msec and Turn OFF BUZZER.
 
1.3. GPIO Ports Configure to Input with Interrupt:

Lab Experiment 8: Write a program Request an interrupt on the Falling edge of ENTER Switch, whenever the user 
button is pressed and increment a counter in the interrupt and RED LED is ON.

Lab Experiment 9: Write an Embedded C Program Whenever SW_UP press RED LED is ON, whenever SW_DN press 
GREEN LED is ON using Falling edge GPIO interrupt.

Lab Experiment 10: Write an Embedded C Program to measure interrupt latency. By default RED LED (-ve Logic 
Level) is ON. Whenever ENT SWITCH (-ve Logic Level) is press RED LED is OFF.


2. Mini Project: 16x2 Monochrome LCD Interface:
GPIO Pin Pin function Device
PB0 GPIO LCD_DATA_4
PB1 GPIO LCD_DATA_5
PB2 GPIO LCD_DATA_6
PB3 GPIO LCD_DATA_7
PB4 GPIO LCD_RS
PB5 GPIO LCD_RW
PB8 GPIO LCD_EN

RS(Register select): A 16X2 LCD has two registers, namely, command and data. The register select is used to switch 
from one register to other. RS=0 for command register, whereas RS=1 for data register.

Command Register: The command register stores the command instructions given to the LCD. A command is an 
instruction given to LCD to do a predefined task like initializing it, clearing its screen, setting the cursor position, 
controlling display etc. Processing for commands happen in the command register.

Data Register: The data register stores the data to be displayed on the LCD. The data is the ASCII value of the 
character to be displayed on the LCD. When we send data to LCD it goes to the data register and is processed 
there. When RS=1, data register is selected.


/*Write Higher Nibble data in to LCD. 
Return Value: No return Value; Argument: unsigned char data */
void write_high_nibble( unsigned char data );

/*Write Lower Nibble data in to LCD. 
Return Value: No return Value; Argument: unsigned char data */
void write_low_nibble( unsigned char data );

/*LCD Initialization. 
Return Value: No return Value; Argument: No Argument */
void KM_LCD_Init(void);

/*Write a LCD command. 
Return Value: No return Value; Argument: unsigned char */
void KM_LCD_Write_Cmd( unsigned char );

/*Write a LCD Data (single character). 
Return Value: No return Value; Argument: unsigned char */
void KM_LCD_Write_Data( unsigned char );

/*Write a LCD Data (Multiple characters). 
Return Value: No return Value; Argument: character pointer */
void KM_LCD_Write_Str(char *);

