#include <stdio.h>
#include "main.h"
/**
 * print_number - write a number
 * @n: int to be added
 * 
 * Return: nothing
 */

void print_number(int n) 
{ 
     if (n < 0) 
     {
        putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        print_number(n / 10);
    }
    putchar(n % 10 + '0');

}
