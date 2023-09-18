#include "main.h"
#include <stdio.h>

/**
*main takes a pointer to an integer 
*
*return :0
*/
void reset_to_98(int *n) 
{ 
  *n=98;
  
}
int main (void) 
{
  int n=402;  
  printf("n=%d/n", n);
  reset_to_98(&n);
  printf("n=%d/n", n);
  return (0);
}
