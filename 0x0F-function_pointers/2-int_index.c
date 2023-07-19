#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - return index place if comparison true, else -1
 * @array: array
 * @size: size of elem in array
 * @cmp: pointer to function of the main
 * return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (1);
	}
	return (-1);
}
