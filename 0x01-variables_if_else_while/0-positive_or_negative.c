#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
* main - print the number is zero , positive or negative
* 
* Description: using the main function
* this program prints "if the number is positive, zero or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* Your code goes there */
if (n > 0)
{
    printf("%d is positive\n", n);
}
else if (n < 0)
{
    printf("%d is negative\n", n);
}
else
{
    printf("%d is zero\n", n);
}
return (0);
}
