#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node of a listint_t
 * @head: head node
 *
 * Return: head node's data (n) | 0 if head is NULL
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!(*head))
		return (0);

	tmp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = tmp;

	return (data);
}
