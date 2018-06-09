#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char **argv)
{
	int pin = 1;
	int value = 0;

	wiringPiSetup();

	pinMode(pin, PWM_OUTPUT);
	pwmSetMode(PWM_MODE_MS);
	pwmSetClock(384);
	pwmSetRange(1000);

	pwmWrite(pin, 30);

	return 0;
}
