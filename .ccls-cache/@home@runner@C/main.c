#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
  int n = _printf("Hello world");
  printf("\nn = %d\n", n);
  
  return 0;
}