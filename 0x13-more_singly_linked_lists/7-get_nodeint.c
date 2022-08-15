#include "lists.h"

/**
 * get_nodeint_at_index - return the (nth) node of a listint_t
 * @head: head node
 * @index: node's index to be returned
 *
 * Return: indexed node | NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (!tmp)
			return (0);
		tmp = tmp->next;
	}

	return (tmp);
}
