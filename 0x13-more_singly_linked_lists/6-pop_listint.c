#include "lists.h"

/**
 * pop_listint - pops
 * @head: ptr
 *
 * Return: number
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *tmp;

	if (!head || !(*head))
		return (0);

	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
