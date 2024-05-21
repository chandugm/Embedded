void LCD_Mux_init(void);
void LCD_init(void);
void i_2_a_LCD(int n);
void LCD_write_str(char *str);
void LCD_write_data(unsigned char a);
void LCD_write_cmd(unsigned char a);
void write_lower_nibble(unsigned char data);
void write_high_nibble(unsigned char data);
void print_LCD(void);

