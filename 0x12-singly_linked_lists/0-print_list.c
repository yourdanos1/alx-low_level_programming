
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: A pointer to the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
count++;
putchar('[');
            putchar('0' + 0);
            putchar(']');
            putchar(' ');
            putchar('(');
            putchar('n');
            putchar('i');
            putchar('l');
            putchar(')');
            putchar('\n');
        }
        else
        {
            size_t len = h->len;
            size_t i;
            count++;
            putchar('[');
            while (len > 0)
         {
                putchar('0' + len % 10);
                len /= 10;
            }
            putchar(']');
            putchar(' ');
            for (i = 0; h->str[i]; i++)
                putchar(h->str[i]);
            putchar('\n');
        }

        h = h->next;
    }

    return count;
}

