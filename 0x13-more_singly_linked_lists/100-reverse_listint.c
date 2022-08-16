#include "lists.h"

listint_t *rev_with_recursion(listint_t *p, listint_t **h, listint_t *n);

/**
 * reverse_listint - reverses a listint_t
 * @head: head node
 *
 * Return: pointer to new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	if (!(*head))
		return ((*head));

	p = 0, n = (*head)->next;
	return (rev_with_recursion(p, head, n));
}

/**
 * rev_with_recursion - reveses a list with recursion
 * Description: helper function to reverse a listint_t with recursion instead
 * of using a loop
 * @p: node before the head
 * @h: head node
 * @n: node next to head
 *
 * Return: pointer to new head node
 */
listint_t *rev_with_recursion(listint_t *p, listint_t **h, listint_t *n)
{
	(*h)->next = p;
	p = (*h);
	if (n)
	{
		(*h) = n;
		n = n->next;
		return (rev_with_recursion(p, h, n));
	}
	return (*h);
}
