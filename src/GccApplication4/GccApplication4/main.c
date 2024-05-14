/*
 * GccApplication4.c
 *
 * Created: 14.05.2024 14:29:04
 * Author : u015329
 */ 

#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRA = 0b11111111;
	
    while (1) 
    {
		PORTA = 0b00001110;
		_delay_ms(100);
		PORTA = 0b00001101;
		_delay_ms(100);
		PORTA = 0b00001011;
		_delay_ms(100);
		PORTA = 0b00000111;
		_delay_ms(100);
    }
}

