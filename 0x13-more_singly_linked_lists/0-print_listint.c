#include "lists.h"

/**
 * print_listint - prints
 * @h: next node
 *
 * Return: size
*/
size_t print_listint(const listint_t *h)
{
	int size;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
