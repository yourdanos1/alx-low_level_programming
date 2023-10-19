
#ifndef LIST_H
#define LIST_H

#include <stddef.h>  /*For size_t*/

/* Structure for a linked list node */
typedef struct list_s
{
    char *str;         /*String data*/
    size_t len;        /* Length of the string*/
    struct list_s *next;  /*Pointer to the next node*/
} list_t;

    extern int _putchar(char c);
    size_t print_list(const list_t *h);
    #endif

