#include <stdio.h>

/**
 * main - write a program that prints the number of arguments passed into it
 *
 * @args: This is argument count
 * @argv: This is argument vector
 *
 * Return: Always 0 success
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
