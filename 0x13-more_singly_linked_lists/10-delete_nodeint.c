#include "lists.h"

/**
 * delete_nodeint_at_index - inserts
 * @index: node
 * @head: node
 *
 * Return: node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *next;
	listint_t *tmp;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		if (head)
		{
			return (pop_listint(head) ? 1 : -1);
		}
		return (-1);
	}

	next = *head;
	while (next && next->next && t < index - 1)
	{
		next = next->next;
		t++;
	}
	if (t != index - 1)
		return (-1);
	tmp = next->next;
	next->next = next->next->next;
	free(tmp);
	return (1);
}
