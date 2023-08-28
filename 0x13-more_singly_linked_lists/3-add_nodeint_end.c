#include "lists.h"

/**
 * add_nodeint_end - prints
 * @head: next node
 * @n: int
 *
 * Return: size
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *t = NULL;
	listint_t *f;

	last = malloc(sizeof(listint_t));
	if (!last)
		return (NULL);
	last->n = n;
	last->next = NULL;
	f = *head;
	while (f)
	{
		t = f;
		f = (f)->next;
	}
	if (t)
		t->next = last;
	else
	{
		t = last;
		f = last;
		*head = f;
	}
	return (*head);
}
