#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(',');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
