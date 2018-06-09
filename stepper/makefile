all: stepper

stepper: main.c
	gcc -g main.c -o stepper -l wiringPi

%.o: %.c
	gcc -c -o $@ $^

clean:
	rm stepper
