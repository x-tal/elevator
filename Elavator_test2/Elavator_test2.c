#include <avr/io.h>
#include<util/delay.h>

#include "Switch.h"
#include "LCD.h"
#include "LCD_shift_from_left.h"
#include "LCD_shift_from_left_stay_middle.h"
#include "LCD_shift_from_middle.h"
#include "LCD_stay.h"
#include "io.h"
#include "up_down_switch.h"



int main(void)
{
	Set();
	LCD_initialize(); // √ ±‚»≠

	LCD_Floor_stay_B1();
	

	
		
	while(1)
	{	
		Switch();
		up_down_state();			
	}	


	return 0;
}
