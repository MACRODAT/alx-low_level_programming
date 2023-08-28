#include "lists.h"

/**
 * print_listint - prints
 * @h: next node
 *
 * Return: size
*/
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
