/*
 * sourcetree_LED_0502.cpp
 *
 * Created: 2018-05-02 오전 10:51:59
 * Author : stc_155
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRD = 0xff;
	PORTD=0xff;
	int a;
	
    while (1) 
    {
		PORTD=0x00;
		_delay_ms(500);
		PORTD = 0xff;
		_delay_ms(500);
    }
}

