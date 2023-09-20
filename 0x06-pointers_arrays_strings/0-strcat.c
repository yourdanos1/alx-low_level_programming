#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_stract(char *dest, char  *src) {
    /* Find the end of the destination string*/
    char *ptr = dest + strlen(dest);
    
     /*Copy the source string to the end of the destination*/
    while (*src != '\0') {
        *ptr++ = *src++;
    }
    
    /* Null-terminate the concatenated string*/
    *ptr = '\0';

    return dest;
}
