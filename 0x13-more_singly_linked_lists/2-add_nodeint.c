#include "lists.h"

/**
 * print_listint - prints
 * @h: next node
 *
 * Return: size
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t first;

	first.n = n;
	first.next = *head;

	return (&first);
}
