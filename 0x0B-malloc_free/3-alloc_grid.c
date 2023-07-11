#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 *
 * return: ...
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int w, x, y, z;

	if (width <= 0 || height <= 0)
	return (NULL);

	mee = malloc(sizeof(int) * height);

	if (mee == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		mee[w] = malloc(sizeof(int) * width);
		if (mee[w] == NULL)
		{
			for (x = w; w >= 0; x--)
			{
			free(mee[x]);
			}
			free(mee);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			mee[y][z] = 0;
		}
	}
	return (mee);
}
