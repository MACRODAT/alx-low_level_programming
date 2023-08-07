#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates str
 * @width: int
 * @height: int
 *
 * Return: char
*/
int **alloc_grid(int width, int height)
{
	int i = 0, w = 0;
	int **ret;

	if (width <= 0 || height <= 0)
		return (NULL);
	ret = malloc(sizeof(int *) * (height));
	if (!ret)
		return (NULL);
	while (w < height)
	{
		ret[w] = malloc(sizeof(int) * width);
		if (!ret[w])
		{
			free(ret);
			for (i = 0; i <= height; i++)
				free(ret[i]);
			return (NULL);
		}
		while (i < width)
		{
			*(ret[w] + i) = 0;
			i++;
		}
		w++;
	}
	return (ret);
}
