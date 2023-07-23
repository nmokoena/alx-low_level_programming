#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function to be used to compare values
 * return: if no element matches or size <= 0 - -1
 *         otherwise - the index of the size of the first element for wich
 *                     the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
