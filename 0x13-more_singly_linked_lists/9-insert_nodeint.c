#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: head node
 * @idx: index position
 * @n: new node's data n
 *
 * Return: pointer to new allocated node (Success) | NULL (Failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int i;

	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!tmp)
			return (0);
		tmp = tmp->next;
	}
	if (!tmp)
		return (0);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n, new->next = tmp->next;
	tmp->next = new;
	return (new);
}
