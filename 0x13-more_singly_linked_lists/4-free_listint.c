#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t
 * @head: head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *next;

	tmp = head;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
