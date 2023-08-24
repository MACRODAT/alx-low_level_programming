#include <stdlib.h>
#include "lists.h"

/**
 * list_len - list
 * @h: po
 *
 * Return: numb
 */
size_t list_len(const list_t *h)
{
	size_t elementCount = 0;

	while (h)
	{
		elementCount++;
		h = h->next;
	}

	return (elementCount);
}
