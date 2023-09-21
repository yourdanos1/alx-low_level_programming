#include <stdio.h>
/*like the concatenate function but this  will use at most n bytes from src*/

char *_strncat(char *dest, char *src, int n) {
    char *originalDest = dest; /* Store the original pointer to dest */
    
    /* Move the dest pointer to the end of the destination string */
    while (*dest != '\0') {
        dest++;
    }
    
    /* Move the dest pointer to the end of the destination string */
    
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    
    /* Null-terminate the concatenated string */
    *dest = '\0';
    
    return originalDest; /* Return a pointer to the start of the concatenated string*/
}
