#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node to the end of a linked list
 * @head: Double pointer to the list_t list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new element, or NULL if the operation fails
 */
list_t *add_node_end(list_t **head, const char *str) {
    list_t *newNode;
    list_t *temp = *head;
    unsigned int strLength = 0;

    while (str[strLength])
        strLength++;

    newNode = malloc(sizeof(list_t));
    if (!newNode)
        return (NULL);

    newNode->str = strdup(str);
    newNode->len = strLength;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return (newNode);
    }

    while (temp->next)
        temp = temp->next;

    temp->next = newNode;

    return (newNode);
}
