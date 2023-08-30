#include "lists.h"
/**
 * print_listint_safe - watches for circular loops
 * @head: pointe
 * Return: new_nod
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur = head;
	size_t elements = 0;

	while (cur)
	{
		printf("[%p] %d", (void *)cur, cur->n);
		elements++;
		if (!cur->next)
			break;
		if (cur - cur->next > 0)
			cur = cur->next;
		else
		{
			printf("->[%p] %d", (void *)cur->next, cur->next->n);
			break;
		}
	}
	return (elements);
}
