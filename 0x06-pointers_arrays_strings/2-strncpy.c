#include <stdio.h>
#include "main.h"

char *_strncpy(char *dest,  char *src, int n) {
    char *ptr = dest;
    
    while (*src && n > 0) {
        *dest++ = *src++;
        n--;
    }
    
    /* If n is greater than the length of src, pad dest with null bytes*/
    while (n > 0) {
        *dest++ = '\0';
        n--;
    }
    
    return ptr;
}
