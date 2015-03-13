// LCD_설정
void LCD_controller(unsigned char control)
{
    _delay_ms(70);
    PORTE = 0x00; //RW clear.
    _delay_us(0.05); //RW & RS Setup time is 40ns min.
    PORTE = 0b00001000; // E set.
    _delay_us(0.1); //Data Setup time is 80ns min.
    PORTA = control; // Data input.
    _delay_us(0.3); // valid data is 130ns min.
    PORTE = 0b10100000; // RS set. RW set. E clear.
}
// LCD_설정
void LCD_data(unsigned char Data)
{
    _delay_ms(10);
    PORTE = 0b10000000; //RS set. RW clear. E clear.
    _delay_us(0.05); //RW & RS Setup time is 40ns min.
    PORTE = 0b10001000; // E set.
    _delay_us(0.1); //Data Setup time is 80ns min.
    PORTA = Data; // Data input.
    _delay_us(0.5); // valid data min is 130ns.
    PORTE = 0b00100000; // RS clear. RW set. E clear.
}

// LCD_data보내기 
void LCD_string(unsigned char address, unsigned char *Str)
{
    int i=0;
    LCD_controller(address); // LCD display start position
    while(*Str != '\0')
    {
        if(address+i == 0x90)
            LCD_controller(0xc0); // second line display
        LCD_data(*Str);
        i++;
        Str++;
    }
}

// LCD 초기화 & 모드 설정
void LCD_initialize(void)
{
    /* 8bit interface mode */
    _delay_ms(50);
    LCD_controller(0x3c); // Function set. Use 2-line, display on.
    _delay_us(40); // wait for more than 39us.
    LCD_controller(0b00001100); // Display ON/OFF Control. display,cursor,blink on
    _delay_us(40); // wait for more than 39us.
    LCD_controller(0x01); // Display Clear.
    _delay_ms(1.53); // wait for more than 1.53ms.
    LCD_controller(0x06); // Entry Mode Set. I/D increment mode, entire shift off
}
