#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
