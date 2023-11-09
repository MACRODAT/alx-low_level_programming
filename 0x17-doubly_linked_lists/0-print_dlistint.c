#include "lists.h"

/**
 * print_dlistint - dd
 *
 * @h: d
 * Return: d
 */
size_t print_dlistint(const dlistint_t *h)
{
	int number;

	number = 0;
	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
