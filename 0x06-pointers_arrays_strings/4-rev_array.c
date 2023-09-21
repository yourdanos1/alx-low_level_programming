#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        /* Swap elements at the start and end positions*/
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        /* Move the start and end positions towards each other*/
        start++;
        end--;
    }
}
