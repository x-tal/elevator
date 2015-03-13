
void Set(void)
{
	DDRA = 0b11111111; // LCD_Data_bit
	DDRB = 0b11111111; // switch LED
	DDRC = 0b00000000; // Switch
	DDRD = 0b11111111; // floor_LED
	DDRE = 0b11111111; // LCD_Control_bit    
	PORTB=0b11111100; //12345600  0ÀÌ¸é ÄÑÁü 1ÀÌ¸é ²¨Áü 
	PORTD=0b00111111; //00654321
}
