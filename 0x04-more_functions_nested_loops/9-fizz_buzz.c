#include "main.h"
#include <stdio.h>

/**
 * main - print number 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 print Buzz instead of number
 * 3 & 5 print FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz"
		for (i =  1; i <= 100; i++)
		{
			if (i == 100)
			printf("%S", b);
			else if ((i % 3 == 0) && (i % 5 == 0))
				printf("%S", fb);
			else if (i % 3 == 0)
				printf("%S", f);
			else if (i % 5 == 0)
				printf("%S", b);
			else
				printf("%S", i);
		}
printf('\n');
return (0);
}

