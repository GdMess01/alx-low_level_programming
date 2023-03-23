#include <stdio.h>
#include "main.h"

/**
* print_square - prints square from '#'
* Return: nothing
*/

void print_square(int size)
{
if (size > 0)
{
int i, j;	
for (i = 0; i < size; i++)
{
for (j = 0; j < (size-1); j++)
{
putchar('#');
}
putchar('#');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
