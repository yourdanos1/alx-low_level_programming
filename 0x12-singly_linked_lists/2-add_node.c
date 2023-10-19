#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: A pointer to the head of the linked list
 * @str: The string to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t i;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->len = 0;
while (str[new_node->len])
new_node->len++;
new_node->str = malloc(new_node->len + 1);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
for (i = 0; i < new_node->len; i++)
new_node->str[i] = str[i];
new_node->str[new_node->len] = '\0';
new_node->next = *head;
*head = new_node;
return (new_node);
}
