#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - prints numbers 0-9 except 2 & 4
* Return: nothing
*/
void print_most_numbers(void)
{
int i;	
for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
putchar(i);
}
putchar(8);
}
