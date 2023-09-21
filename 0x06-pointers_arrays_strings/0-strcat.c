#include <stdio.h>
#include "main.h"
/**
 * * _strcat concatenates two strings
 *
 * return a pointer to a result dest
 */

char *_strcat(char *dest, char *src) {
    char *originalDest = dest; 
    
    /*Move the dest pointer to the end of the destination string*/
    while (*dest != '\0') {
        dest++;
    }
    
    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    /*Null-terminate the concatenated string*/
    *dest = '\0';
    
    return originalDest; /* Return a pointer to the start of the concatenated string*/
}
