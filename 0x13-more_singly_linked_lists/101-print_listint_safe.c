#include "lists.h"
/**
 * print_listint_safe - watches for circular loops
 * @head: pointe
 *
 * Return: new_nod
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur = head;
	size_t elements = 0;
	long int diff = 0;

	while (cur)
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		elements++;
		diff = cur - cur->next;
		if (diff > 0)
			cur = cur->next;
		else
		{
			printf("-> [%p] %d\n", (void *)cur->next, cur->next->n);
			break;
		}
	}
	return (elements);
}
