#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees
 * @h: pointer
 *
 * Return: nns
 */
size_t free_listint_safe(listint_t **h)
{
	size_t sizer = 0;
	int diff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(h);
			*h = tmp;
			sizer++;
		}
		else
		{
			*h = NULL;
			sizer++;
			break;
		}
	}

	*h = NULL;

	return (sizer);
}
