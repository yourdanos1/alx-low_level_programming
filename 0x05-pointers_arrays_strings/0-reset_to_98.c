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
  int p=402;  
  printf("n=%d\n", p);
  reset_to_98(&p);
  printf("n=%d\n", p);
  return (0);
}
