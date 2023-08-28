#include "lists.h"

/**
 * get_nodeint_at_index - ind
 * @head: first
 * @index: index
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	if (!head)
		return (NULL);
	return (head);
}
