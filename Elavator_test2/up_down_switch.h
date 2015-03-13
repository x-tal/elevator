/*
/////////////////////////////////////////////////////////////////////////////////////////////////////
volatile unsigned int Floor=0;
volatile unsigned int Elevator=0;

void up_down_state(void)
{
//////////////////////////////////////3층 올라가는 버튼//////////////////////////////////////////////	
	if(pinc1==0)
	{
		
		Floor = 3;
				if(Elevator == 3)
				{
						Data_1 = 0;
						Switch();
				}
				if(Elevator == 0)
				{	
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}

				if(Elevator == 1)
				{	
		
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}		
			
				}

				if(Elevator == 2)
				{	
		
					if(Floor>Elevator)  // 2 >> 3
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_3();
						LCD_Floor_stay_3();
						Elevator = 3;
						
						Data_1 = 0;
						Switch();

						PORTD = 0b00111110;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111110;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111110;
						_delay_ms(70000);
						PORTD = 0b00111111;
						
					}
				}
				 
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////	

//////////////////////////////////////3층 내려가는 버튼//////////////////////////////////////////////	
	if(pinc2==0)
	{
		
		Floor = 3;
				if(Elevator == 3)
				{
						Data_2 = 0;
						Switch();
				}
				if(Elevator == 0)
				{	
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}

				if(Elevator == 1)
				{	
		
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}		
			
				}

				if(Elevator == 2)
				{	
		
					if(Floor>Elevator)  // 2 >> 3
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_3();
						LCD_Floor_stay_3();
						Elevator = 3;
					}
				}
				 

				 		Data_2 = 0;
						Switch();

						PORTD = 0b00111101;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111101;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111101;
						_delay_ms(70000);
						PORTD = 0b00111111;

	}
/////////////////////////////////////////////////////////////////////////////////////////////////////
	
//////////////////////////////////////2층 내려가는 버튼//////////////////////////////////////////////		
	if(pinc3==0)
	{

		Floor = 2;
				if(Elevator == 2)
				{
						Data_3 = 0;
						Switch();

				}
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}
				if(Elevator ==1 )
				{
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
		

						Data_3 = 0;
						Switch();

						PORTD = 0b00111011;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111011;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111011;
						_delay_ms(70000);
						PORTD = 0b00111111;

	}
/////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////2층 내려가는 버튼//////////////////////////////////////////////		
	if(pinc4==0)
	{

		Floor = 2;
				if(Elevator == 2)
				{
						Data_4 = 0;
						Switch();
				}
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}
				if(Elevator ==1 )
				{
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
						Data_4 = 0;
						Switch();

						PORTD = 0b00110111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00110111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00110111;
						_delay_ms(70000);
						PORTD = 0b00111111;		
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////1층 올라가는 버튼//////////////////////////////////////////////
	if(pinc5==0)
	{

		Floor = 1;
				if(Elevator == 1)
				{
						Data_5 = 0;
						Switch();
				}
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
						
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
				if(Elevator == 2)
				{
					if(Floor<Elevator) // 2 >> 1
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();
						Elevator = 1;
					}
				}
				
						Data_5 = 0;
						Switch();
						PORTD = 0b00101111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00101111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00101111;
						_delay_ms(70000);
						PORTD = 0b00111111;					

	}
/////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////1층 올라가는 버튼//////////////////////////////////////////////
	if(pinc6==0)
	{

		Floor = 1;
				
				
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
				if(Elevator == 2)
				{
					if(Floor<Elevator) // 2 >> 1
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();
						Elevator = 1;
					}
				}
						
						Data_6 = 0;
						Switch();
						PORTD = 0b00011111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00011111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00011111;
						_delay_ms(70000);
						PORTD = 0b00111111;
						Data_6 = 0;
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////
}

/* 2 >> 3
		LCD_Floor_shift_middle_2();
		LCD_Floor_shift_left_stay_middle_3();
		LCD_Floor_stay_3();
*/

/* 1 >> 2
		LCD_Floor_shift_middle_1();
		LCD_Floor_shift_left_stay_middle_2();
		LCD_Floor_stay_2();	
*/

/* B1 >> 1
		LCD_Floor_shift_middle_B1();
		LCD_Floor_shift_left_stay_middle_1();
		LCD_Floor_stay_1();	 
*/

/* 3 >> 2
		LCD_Floor_shift_middle_3();
		LCD_Floor_shift_left_stay_middle_2();
		LCD_Floor_stay_2();	
*/

/* 2 >> 1
		LCD_Floor_shift_middle_2();
		LCD_Floor_shift_left_stay_middle_1();
		LCD_Floor_stay_1();
*/

/* 1 >> B1
		LCD_Floor_shift_middle_1();
		LCD_Floor_shift_left_stay_middle_B1();
		LCD_Floor_stay_B1();
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////////////////
volatile unsigned int Floor = 0;
volatile unsigned int Elevator = 0;


void up_down_state(void)
{
//////////////////////////////////////3층 올라가는 버튼//////////////////////////////////////////////	
	if(pinc1==0)
	{
		
		Floor = 3;
						
				if(Elevator == 0)
				{	
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}

				if(Elevator == 1)
				{	
		
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}		
			
				}

				if(Elevator == 2)
				{	
		
					if(Floor>Elevator)  // 2 >> 3
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_3();
						LCD_Floor_stay_3();
						Elevator = 3;
						
						Data_1 = 0;
						Switch();

						PORTD = 0b00111110;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111110;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111110;
						_delay_ms(70000);
						PORTD = 0b00111111;
						
					}
				}
				 
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////	

//////////////////////////////////////3층 내려가는 버튼//////////////////////////////////////////////	
	if(pinc2==0)
	{
		
		Floor = 3;
			
				if(Elevator == 0)
				{	
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}

				if(Elevator == 1)
				{	
		
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}		
			
				}

				if(Elevator == 2)
				{	
		
					if(Floor>Elevator)  // 2 >> 3
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_3();
						LCD_Floor_stay_3();
						Elevator = 3;
					}
				}
				 

				 		Data_2 = 0;
						Switch();

						PORTD = 0b00111101;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111101;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111101;
						_delay_ms(70000);
						PORTD = 0b00111111;

	}
/////////////////////////////////////////////////////////////////////////////////////////////////////
	
//////////////////////////////////////2층 내려가는 버튼//////////////////////////////////////////////		
	if(pinc3==0)
	{

		Floor = 2;
				
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}
				if(Elevator ==1 )
				{
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
		

						Data_3 = 0;
						Switch();

						PORTD = 0b00111011;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111011;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00111011;
						_delay_ms(70000);
						PORTD = 0b00111111;

	}
/////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////2층 내려가는 버튼//////////////////////////////////////////////		
	if(pinc4==0)
	{

		Floor = 2;
				
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}
				if(Elevator ==1 )
				{
					if(Floor>Elevator) // 1 >> 2
					{
						LCD_Floor_shift_middle_1();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();	
						Elevator = 2;
					}
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
						Data_4 = 0;
						Switch();

						PORTD = 0b00110111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00110111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00110111;
						_delay_ms(70000);
						PORTD = 0b00111111;		
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////1층 올라가는 버튼//////////////////////////////////////////////
	if(pinc5==0)
	{

		Floor = 1;
				
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
						
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
				if(Elevator == 2)
				{
					if(Floor<Elevator) // 2 >> 1
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();
						Elevator = 1;
					}
				}
				
						Data_5 = 0;
						Switch();
						PORTD = 0b00101111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00101111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00101111;
						_delay_ms(70000);
						PORTD = 0b00111111;					

	}
/////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////1층 올라가는 버튼//////////////////////////////////////////////
	if(pinc6==0)
	{

		Floor = 1;
								
				if(Elevator == 0)
				{
					if(Floor>Elevator) // B1 >> 1
					{
						LCD_Floor_shift_middle_B1();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();	
						Elevator = 1;
					}
				}
				if(Elevator == 3)
				{
					if(Floor<Elevator) // 3 >> 2
					{
						LCD_Floor_shift_middle_3();
						LCD_Floor_shift_left_stay_middle_2();
						LCD_Floor_stay_2();
						Elevator = 2;
					}
				}
				if(Elevator == 2)
				{
					if(Floor<Elevator) // 2 >> 1
					{
						LCD_Floor_shift_middle_2();
						LCD_Floor_shift_left_stay_middle_1();
						LCD_Floor_stay_1();
						Elevator = 1;
					}
				}
						
						Data_6 = 0;
						Switch();
						PORTD = 0b00011111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00011111;
						_delay_ms(40000);
						PORTD = 0b00111111;
						_delay_ms(40000);
						PORTD = 0b00011111;
						_delay_ms(70000);
						PORTD = 0b00111111;
						Data_6 = 0;
						
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////
}

/* 2 >> 3
		LCD_Floor_shift_middle_2();
		LCD_Floor_shift_left_stay_middle_3();
		LCD_Floor_stay_3();
*/

/* 1 >> 2
		LCD_Floor_shift_middle_1();
		LCD_Floor_shift_left_stay_middle_2();
		LCD_Floor_stay_2();	
*/

/* B1 >> 1
		LCD_Floor_shift_middle_B1();
		LCD_Floor_shift_left_stay_middle_1();
		LCD_Floor_stay_1();	 
*/

/* 3 >> 2
		LCD_Floor_shift_middle_3();
		LCD_Floor_shift_left_stay_middle_2();
		LCD_Floor_stay_2();	
*/

/* 2 >> 1
		LCD_Floor_shift_middle_2();
		LCD_Floor_shift_left_stay_middle_1();
		LCD_Floor_stay_1();
*/

/* 1 >> B1
		LCD_Floor_shift_middle_1();
		LCD_Floor_shift_left_stay_middle_B1();
		LCD_Floor_stay_B1();
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
