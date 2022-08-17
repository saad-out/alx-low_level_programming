#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * is_visited - check if a node has been visited
 * @visited: array of visited nodes
 * @node: node to be checked
 *
 * Return: 1 (Visited) | 0 (Not Visited)
 */
int is_visited(const listint_t **visited, const listint_t *node)
{
	int i;

	for (i = 0; visited[i]; i++)
		if (visited[i] == node)
			return (1);
	return (0);
}

/**
 * print_listint_safe - prints listint_t list
 * @head: head node
 * Description: print all elements of a lisitint_t list including
 * lists with loop, avoiding infinite repetition
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *visited[150];
	const listint_t *tmp;
	int flag;
	size_t i;

	if (!head)
		return (0);

	for (i = 0; i < 150; i++)
		visited[i] = 0;

	tmp = head, i = 0, flag = 0;
	while (tmp)
	{
		if (is_visited(visited, tmp))
			printf("-> "), flag = 1;
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		if (flag)
			return (i);
		visited[i++] = tmp;
		tmp = tmp->next;
	}
	return (i);
}
