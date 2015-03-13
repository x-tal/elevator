
// 스위치 선언
volatile unsigned char pinc1; 
volatile unsigned char pinc2;
volatile unsigned char pinc3;
volatile unsigned char pinc4;
volatile unsigned char pinc5;
volatile unsigned char pinc6;

//바깥 엘리베이터 버튼 동시제어가능 
volatile unsigned int Data_1;
volatile unsigned int Data_2;
volatile unsigned int Data_3;
volatile unsigned int Data_4;
volatile unsigned int Data_5;
volatile unsigned int Data_6;

volatile unsigned int Count;

//스위치 함수
void Switch(void)
{
	pinc1 = PINC & 0b00000001; // 1번 스위치가 눌렸을때 
	pinc2 = PINC & 0b00000010; // 2번 스위치가 눌렸을때
	pinc3 = PINC & 0b00000100; // 3번 스위치가 눌렸을때
	pinc4 = PINC & 0b00001000; // 4번 스위치가 눌렸을때
	pinc5 = PINC & 0b00010000; // 5번 스위치가 눌렸을때
	pinc6 = PINC & 0b00100000; // 6번 스위치가 눌렸을때
	
	/*
		time1++;

		if(time1==80)
		{
			Data_1=0;
			Data_2=0;
			Data_3=0;
			Data_4=0;
			Data_5=0;
			Data_6=0;
			time1=0;
		}
	*/

		if(pinc1==0)
		{
			 Data_1 = 4;
			 Count==1;
		}
	

		if(pinc2==0)
		{
			 Data_2 = 8;
			 Count==2;
		}
		
		if(pinc3==0)
		{
			 Data_3 = 16;
			 Count==3;
		}
		
		if(pinc4==0)
		{
			 Data_4 = 32;
			 Count==4;
		}
		
		if(pinc5==0)
		{
			 Data_5 = 64;
			 Count==5;
		}
		
		
		if(pinc6==0)
		{
			 Data_6 = 128;
			 Count==6;
		}
				
		 PORTB = 0b11111111- Data_1 - Data_2 - Data_3 - Data_4 - Data_5 - Data_6; // 스위치 동시제어 
		_delay_ms(1); // ~밝기 조절
						
}
