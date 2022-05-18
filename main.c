#include<avr/io.h>
#include<util/delay.h>

int main(void){

	DDRD = 0xFF; // PortD is OUTPUT
	PORTD = 0x00;  // 0b 00000000

	while(1){

		for(int i=0;i<8;i++){
			PORTD |= (1<<i);
			_delay_ms(100);
			PORTD = 0x00;
		}

		PORTD = 0x00;

		for(int i=7;i>=0;i--){
			PORTD |= (1<<i);
			_delay_ms(00);
			PORTD = 0x00;

		}
	}

}
