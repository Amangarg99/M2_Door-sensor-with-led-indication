#include "project_config.h"
#include <avr/io.h>

void change_switch_state(uint8_t state)
{
	switch_PORT = (state << switch_PIN);
}
int main(void)
{

	DDRB=DDRB&0b11111101; 
	DDRC=DDRC|0b01000000; 
	while(1)
	{
		 change_switch_state(switch_ON);
		delay_ms(switch_ON_TIME);
		
        change_led_state(switch_OFF);
		delay_ms(switch_OFF_TIME); 	
if(PINB & 0b00000010) 
	PORTC=PORTC|0b01000000; 
		else
		PORTC=PORTC&0b10111111; 
	}
	return 0;
	}

