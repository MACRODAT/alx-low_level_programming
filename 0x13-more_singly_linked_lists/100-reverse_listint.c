#include "lists.h"

/**
 * reverse_listint - rev
 * @head: pointer
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = next;
		*head = next;
	}
	*head = prev;
	return (*head);
}
