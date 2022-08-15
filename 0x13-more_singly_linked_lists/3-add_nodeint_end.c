#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node to the end of listint_t
 * @head: head node
 * @n: node integer value
 *
 * Return: pointer to new allocated node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *prev;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (0);

	tmp->n = n, tmp->next = 0;
	if (!(*head))
		*head = tmp;
	else
	{
		prev = *head;
		while (prev->next)
			prev = prev->next;
		prev->next = tmp;
	}
	return (tmp);
}
