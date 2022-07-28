#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory (Success) | exit (Failure)
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
