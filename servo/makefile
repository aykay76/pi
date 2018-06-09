all: servo

servo: main.c
	gcc -g main.c -o servo -l wiringPi

%.o: %.c
	gcc -c -o $@ $^

clean:
	rm servo
