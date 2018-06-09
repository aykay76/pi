#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char **argv)
{
	int pin[4] = { 5, 6, 13, 19 };
	int sequence[8][4] = {
		{ 1, 0, 0, 0},
		{ 1, 1, 0, 0},
		{ 0, 1, 0, 0},
		{ 0, 1, 1, 0},
		{ 0, 0, 1, 0},
		{ 0, 0, 1, 1},
		{ 0, 0, 0, 1},
		{ 1, 0, 0, 1}
	};
	int step = 0;

	wiringPiSetup();

	for (int i = 0; i < 4; i++)
	{
		pinMode(pin[i], OUTPUT);
		digitalWrite(pin[i], 0);
	}

	for (;;)
	{
		printf("Step %d\n", step);
		for (int i = 0; i < 4; i++)
		{
			digitalWrite(pin[i], sequence[step][i]);
		}
		step = (step + 1) % 8;
	}

	return 0;
}
