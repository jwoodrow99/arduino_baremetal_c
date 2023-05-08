#include <avr/io.h>
#include <util/delay.h>

int main(void){
	int delay = 100;
	DDRB = DDRB | (1 << DDB5);

	while(1){
		PORTB = PORTB | (1 << PORTB5);
		_delay_ms(delay);
		PORTB = PORTB & ~(1 << PORTB5);
		_delay_ms(delay);
	}
}
