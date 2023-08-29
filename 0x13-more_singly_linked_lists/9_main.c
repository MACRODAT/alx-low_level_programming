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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 0, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}