#include "lists.h"

/**
 * dlistint_len - dd
 *
 * @h: dd
 * Return: dd
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number;

	number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
