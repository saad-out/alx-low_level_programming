#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory and initialize it to NULL
 * @nmemb: number of elements
 * @size: size of each elements
 * Return: pointer to allocated memory (Success) | NULL (Failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *c;
	unsigned int i;

	if (!nmemb || !size)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	c = p;
	i = 0;
	while ((i++) < (nmemb * size))
		*c++ = 0;
	return (p);
}
