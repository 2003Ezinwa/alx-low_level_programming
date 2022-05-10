#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 * Return: pointer to newly allocated memory, or NULL if failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *b;
	unsigned int i, max = new_size;
	char *oldb = ptr;

	if (ptr == NULL)
	{
		b = malloc(new_size);
		return (b);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	b = malloc(new_size);
	if (b == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		b[i] = oldb[i];
	free(ptr);
	return (b);
}
