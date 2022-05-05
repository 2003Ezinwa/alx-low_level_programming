#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to a
 * 2 dimensional array grid
 * @width: width of grid
 * @height: height of grid
 * Return: memory of grid, or just grid
 */

int **alloc_grid(int width, int height)
{
	int **mat;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mat = malloc(height * sizeof(int *));
	if (mat == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
		mat[a] = malloc(width * sizeof(int));
		if (mat[a] == NULL)
			while (a > 0)
				free(mat[a--]);
			free(mat);
			return (NULL);
		for (b = 0; b < width; b++)
			mat[a][b] = 0;
	return (mat);
}
