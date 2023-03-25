#include <stdio.h>
#include "main.h"
/**
* print_number - prints a number
* Return: nothing
*/

void print_number(int n)
{
  if(n/10)
  {
    print_number(n/10);
  }
  putchar((n % 10) + '0');
}
putchar('\n');
