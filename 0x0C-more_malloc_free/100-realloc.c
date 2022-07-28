#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previous memory pointer
 * @old_size: size of ptr int bytes
 * @new_size: new size in bytes
 * Return: pointer to new allocated memory (Success) | NULL (Failure)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *c, *k;
	unsigned int i;

	if (new_size == old_size && ptr)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (0);
	}
	p = malloc(new_size);
	if (!p)
		return (0);
	if (!ptr)
		return (p);
	i = 0;
	c = p;
	k = ptr;
	while (i < old_size && i < new_size)
	{
		*c++ = *k++;
		i++;
	}
	free(ptr);
	return (p);
}
