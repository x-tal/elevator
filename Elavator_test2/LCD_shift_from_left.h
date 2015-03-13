
// B1층 shift로 표시
void LCD_Floor_shift_left_B1(void)
{
		int shift = 0;
		for(shift = 0; shift<16; shift++)
		{
			LCD_string(0x80+shift, "B1"); // Start address is 0x80(0,0)
			if(shift==7)
			{
				_delay_ms(1000000);
			}
			_delay_ms(4000);
			LCD_initialize(); // 초기화		(초기화를 안하면 BBBBB1으로 글자가 남는다.)	
	 	}	
}

// 1층 shift로 표시
void LCD_Floor_shift_left_1(void)
{
		int shift = 0;
		for(shift = 0; shift<16; shift++)
		{
			LCD_string(0x80+shift, "1"); // Start address is 0x80(0,0)
			if(shift==7)
			{
				_delay_ms(1000000);
			}
			_delay_ms(4000);
			LCD_initialize(); // 초기화			
	 	}	
}

// 2층 shift로 표시
void LCD_Floor_shift_left_2(void)
{

		int shift = 0;
		for(shift = 0; shift<16; shift++)
		{
			LCD_string(0x80+shift, "2"); // Start address is 0x80(0,0)
			if(shift==7)
			{
				_delay_ms(1000000);
			}
			_delay_ms(4000);
			LCD_initialize(); // 초기화			
	 	}	
}

// 3층 shift로 표시
void LCD_Floor_shift_left_3(void)
{

		int shift = 0;
		for(shift = 0; shift<16; shift++)
		{
			LCD_string(0x80+shift, "3"); // Start address is 0x80(0,0)
			if(shift==7)
			{
				_delay_ms(1000000);
			}
			_delay_ms(4000);
			LCD_initialize(); // 초기화			
	 	}	

}
