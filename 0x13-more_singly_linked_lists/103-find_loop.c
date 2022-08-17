#include "lists.h"

/**
 * find_listint_loop - finds start of loop in a listint_t list
 * @head: head node
 *
 * Return: pointer to node where the loop starts | NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (0);

	slow = head, fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			break;
	}
	if (fast && fast->next)
	{
		slow = head;
		while (slow != fast)
			slow = slow->next, fast = fast->next;
		return (slow);
	}

	return (0);
}
