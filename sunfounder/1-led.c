#include <wiringPi.h>
#include <stdio.h>
#define LedPin 0

int main(void) {
	if(wiringPiSetup() == -1) {
		printf("set up WiringPi failed");
		return 1;
	}

	pinMode(LedPin, OUTPUT);
	while(1) {
		digitalWrite(LedPin, LOW);
		printf("...LED OM\n");
		delay(500);
		digitalWrite(LedPin, HIGH);
		printf("...LED OFF\n");
		delay(500);
	}
	return 0;
}
