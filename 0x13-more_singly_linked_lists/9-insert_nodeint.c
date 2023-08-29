#include "lists.h"

/**
 * insert_nodeint_at_index - inserts
 * @head: node
 * @idx: inedx
 * @n: int
 *
 * Return: node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t = 0;
	listint_t *next;
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;

	if (idx == 0)
	{
		if (head)
		{
			tmp->next = *head;
			*head = tmp;
		}
		return (tmp);
	}
	if (!head || !*head)
		return (NULL);
	next = *head;
	while (next && t < idx - 1)
	{
		next = next->next;
		t++;
	}
	if (t != idx - 1)
		return (NULL);
	if (next->next)
	{
		tmp->next = next->next;
		next->next = tmp;
		return (tmp);
	}
	else
	{
		next->next = tmp;
		return (tmp);
	}
}
