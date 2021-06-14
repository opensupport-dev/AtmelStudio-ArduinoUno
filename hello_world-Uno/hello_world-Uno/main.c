#include <atmel_start.h>
#include <stdio.h>

#define MY_DELAY       for(unsigned long int i = 0; i<5000000; i++);

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		printf("hello Uno!!\n\r");
		
		MY_DELAY;
	}
}
