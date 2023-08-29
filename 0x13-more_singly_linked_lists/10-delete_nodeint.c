#include "lists.h"

/**
 * delete_nodeint_at_index - inserts
 * @index: node
 *
 * Return: node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *next;
	listint_t *tmp;

	if (index == 0)
	{
		if (head)
		{
			return (pop_listint(head) ? 1 : 0);
		}
		return (-1);
	}
	if (!head || !*head)
		return (-1);
	next = *head;
	while (next && t < index - 1)
	{
		next = next->next;
		t++;
	}
	if (t != index - 1)
		return (-1);
	if (next->next)
	{
		tmp = next->next;
		next->next = next->next->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
