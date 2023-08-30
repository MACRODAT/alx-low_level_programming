#include "lists.h"
/**
 * print_listint_safe - watches for circular loops
 * @head: pointe
 * Return: new_nod
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur = head;
	const listint_t *tmp = head;
	unsigned int elements = 0;
	unsigned int tmp_index = 0;

	while (cur)
	{
		printf("[%p] %d", (void *)cur, cur->n);
		cur = cur->next;
		tmp = head;
		elements++;
		while (tmp_index++ < elements)
		{
			if (tmp == cur)
			{
				printf("-> [%p] %d", (void *)cur, cur->n);
				return (elements);
			}
			tmp = tmp->next;
		}
	}
	return (elements);
}
