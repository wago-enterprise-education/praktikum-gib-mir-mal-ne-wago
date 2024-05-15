/*
 * gib_mir_mal_ne_wago.c
 *
 * Created: 14.05.2024 14:29:04
 * Author : Andre Alexander Bell <andre.bell@wago.com>, Maik Rehburg <maik.rehburg@wago.com>
 */ 

#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRA = 0b00001111;
	
    while (1) 
    {
		PORTA = 0b00000111;
		_delay_ms(35);
		PORTA = 0b00001011;
		_delay_ms(35);
		PORTA = 0b00001101;
		_delay_ms(35);
		PORTA = 0b00001110;
		_delay_ms(35);
    }
}

