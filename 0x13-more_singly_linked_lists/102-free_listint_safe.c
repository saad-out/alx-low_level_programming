#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_visited2 - check in adress has been visited
 * @visited: array of visited adresses
 * @p: adress to be checked
 *
 * Return: 1 (Visited) | 0 (Not Visited)
 */
int is_visited2(void **visited, void *p)
{
	int i;

	for (i = 0; visited[i]; i++)
		if (p == visited[i])
			return (1);
	return (0);
}

/**
 * free_listint_safe - frees listint_t list
 * @h: head node
 * Description: frees a listint_t list including lists with
 * loops, avoiding endless repetition
 *
 * Return: size of free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	void *visited[200];
	listint_t *tmp, *next;
	size_t i;


	if (!h)
		return (0);

	for (i = 0; i < 200; i++)
		visited[i] = 0;
	tmp = *h, i = 0;
	while (tmp)
	{
		if (is_visited2(visited, (void *)tmp))
			break;
		visited[i++] = (void *)tmp;
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*h = 0;
	return (i);
}
