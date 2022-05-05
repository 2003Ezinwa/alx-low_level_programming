#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grid allocated in
 * allocate_grid function
 * @mat: mat from alloc_grid
 * @height: height of the array
 * Return: void
 */

void free_grid(int **mat, int height)
{
	int a;

	if (mat != NULL || height != 0)
	{
		for (a = 0; a < height; a++)
		{
			free(mat[a]);
		}
		free(mat);
	}
}
