/*
 * TEST_0502.cpp
 *
 * Created: 2018-05-02 오후 3:37:08
 * Author : stc_155
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0x00;
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(500);
    }
}

