#include "main.h"

/**
 * _isupper - ceck if uppercase letters
 * @c: car to check
 * Return: if uppercase return 1, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
