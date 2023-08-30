#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "0-print_listint.c"
#include "1-listint_len.c"
#include "10-delete_nodeint.c"
#include "2-add_nodeint.c"
#include "3-add_nodeint_end.c"
#include "4-free_listint.c"
#include "5-free_listint2.c"
#include "6-pop_listint.c"
#include "7-get_nodeint.c"
#include "8-sum_listint.c"
#include "9-insert_nodeint.c"
#include "101-print_listint_safe.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}