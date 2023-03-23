#include <stdio.h>


/**
* more_numbers - prints numbers 0-14 ten times
* Return: nothing
*/

void more_numbers(void)
{
int i;
int j;


for (i = 0; i <= 9; i++)  
{
for (j = 0; j <= 14; j++)
{
if(j > 9)
{
putchar((j / 10) + '0');
}
putchar((j % 10) + '0');
}
putchar(10);
}
}
