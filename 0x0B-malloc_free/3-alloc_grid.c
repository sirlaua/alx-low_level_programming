#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, **n;

	if (width < 1 || height < 1)
		return (NULL);

	n = malloc(height * sizeof(int *));
	if (n == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		n[i] = malloc(width * sizeof(int));
		if (n[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(n[j]);
			free(n);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			n[i][j] = 0;
	return (n);
}
