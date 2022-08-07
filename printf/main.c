#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
  int n = _printf("Hello %c %s %%", 'A', "Temesgen");
  printf("\nn = %d\n", n);
  
  return (0);
}