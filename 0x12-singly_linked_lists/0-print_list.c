#include <stdio.h>
#include "lists.h"

/**
 * print_list - Outputs all elements in a linked list
 * @h: Pointer to the list_t list for printing
 *
 * Returns: Number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodesPrinted = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodesPrinted++;
	}

	return (nodesPrinted);
}
