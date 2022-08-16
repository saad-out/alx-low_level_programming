#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees listint_t and set head to NULL
 * @head: head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *next;

	if (!head)
		return;
	tmp = *head;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = 0;
}
