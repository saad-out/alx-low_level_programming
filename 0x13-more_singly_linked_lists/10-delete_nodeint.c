#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at a given index
 * @head: head node
 * @index: node index
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int i;

	if (!index)
		return (del_head(head));

	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp && tmp->next)
	{
		del = tmp->next;
		tmp->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}

/**
 * del_head - delete head node of a listint_t
 * @head: head node
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int del_head(listint_t **head)
{
	listint_t *tmp;

	if (!(*head))
		return (-1);
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (1);
}
