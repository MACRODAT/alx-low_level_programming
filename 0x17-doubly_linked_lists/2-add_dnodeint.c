#include "lists.h"

/**
 * add_dnodeint - dd
 *
 * @head: dd
 * @n: dd
 * Return: dd
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *nn_node;

	nn_node = malloc(sizeof(dlistint_t));
	if (nn_node == NULL)
		return (NULL);

	nn_node->n = n;
	nn_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nn_node->next = h;

	if (h != NULL)
		h->prev = nn_node;

	*head = nn_node;

	return (nn_node);
}
