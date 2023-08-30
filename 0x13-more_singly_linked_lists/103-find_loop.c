#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - fdeklj
 * @head: head
 *
 * Return: dd
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cur, *curef;

	if (head == NULL)
		return (NULL);
	curef = head;
	cur = curef;
	do {
		if (cur->next)
			cur = cur->next;
		else
			return (NULL);

		if (curef->next->next)
			curef = curef->next->next;
		else
			return (NULL);
	} while (curef != cur);

	cur = head;
	while (curef != cur)
	{
		curef = curef->next;
		cur = cur->next;
	}

	return (cur);
}