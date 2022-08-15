#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node to beginning of a lisint_t
 * @head: head node
 * @n: node integer value
 *
 * Return: pointer to new allocated head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (0);

	tmp->n = n, tmp->next = *head;
	*head = tmp;
	return (tmp);
}
