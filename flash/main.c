#include<avr/io.h>
#include<util/delay.h>

int main(){
	DDRB = 0xff;
	PORTB = 0xff;

	return 0;
}
