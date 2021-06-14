/*
 * led_blink.c
 *
 * Created: 2021-06-15 오전 1:45:12
 * Author : bini
 */ 
#define F_CPU 16000000L

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x20;
	// DDRB = 0b00100000;
	
	while (1)
	{
		PORTB = 0x00;
		// PORTB = 0b00000000;
		_delay_ms(2000);
		PORTB = 0x20;
		// PORTB = 0b00100000;
		_delay_ms(2000);
	}
}

