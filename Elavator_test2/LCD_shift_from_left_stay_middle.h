

void LCD_Floor_shift_left_stay_middle_B1(void)
{
		int shift = 0;
		for(shift = 0; shift<8; shift++)
		{
			LCD_string(0x80+shift, "B1"); // Start address is 0x80(0,0)
			_delay_ms(4000);
			LCD_initialize(); // �ʱ�ȭ		(�ʱ�ȭ�� ���ϸ� BBBBB1���� ���ڰ� ���´�.)
			Switch();
	 	}	
}

// 1�� shift�� ǥ��
void LCD_Floor_shift_left_stay_middle_1(void)
{
		int shift = 0;
		for(shift = 0; shift<8; shift++)
		{
			LCD_string(0x80+shift, "1"); // Start address is 0x80(0,0)
			_delay_ms(4000);
			LCD_initialize(); // �ʱ�ȭ	
			Switch();		
	 	}	
}

// 2�� shift�� ǥ��
void LCD_Floor_shift_left_stay_middle_2(void)
{

		int shift = 0;
		for(shift = 0; shift<8; shift++)
		{
			LCD_string(0x80+shift, "2"); // Start address is 0x80(0,0)
			_delay_ms(4000);
			LCD_initialize(); // �ʱ�ȭ
			Switch();						
	 	}	
}

// 3�� shift�� ǥ��
void LCD_Floor_shift_left_stay_middle_3(void)
{

		int shift = 0;
		for(shift = 0; shift<8; shift++)
		{
			LCD_string(0x80+shift, "3"); // Start address is 0x80(0,0)
			_delay_ms(4000);
			LCD_initialize(); // �ʱ�ȭ
			Switch();			
	 	}	

}
