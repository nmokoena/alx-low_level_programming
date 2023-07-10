#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: pointer block of memory to fill
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0) /*base condition*/

	return (1);
	else if (n < 0) /*base bondition*/

	return (-1);
	else
	return (n * factorial(n - 1)); /*recursive call*/

}
