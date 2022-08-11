#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a list_t list
  * @head: head node
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
