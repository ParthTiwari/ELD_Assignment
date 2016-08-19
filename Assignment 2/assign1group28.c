#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRB=32;
	while(1){
		PORTB|=32;
		_delay_ms(1000);
		PORTB&=~32;
		_delay_ms(1000);
	}
	return 0;
}