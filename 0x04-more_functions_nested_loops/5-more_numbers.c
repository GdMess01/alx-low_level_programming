#include <stdio.h>
#include "main.h"

void more_numbers(void) 
{
int i;
int j;
int k;

for (k = 0; k <= 9; k++)  
{
for (i = 48; i <= 57; i++)
{
putchar(i);
if(i == 57)
{
for (j = 48; j <= 52; j++)
{
putchar('1');
putchar(j);
}
}
}
putchar('\n');
}

}
