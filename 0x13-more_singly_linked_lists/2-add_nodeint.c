#include "lists.h"

/**
 * add_nodeint - prints
 * @head: next node
 * @n: int
 *
 * Return: size
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);
	first->n = n;
	if (head)
		first->next = *head;
	else
		first->next = NULL;
	return (first);
}
