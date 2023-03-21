#include "main.h"

/**
 * print_sign - cheks the sign of numbers
 * @c: The character to be checked
 * Return: 1 n is greater than zero and 0 for null and -1 for negative
 */

int print_sign(int n)
{
    if (n > 0)
    {
    _putchar(43);
    return (1);
    }
    else if (n < 0)
    {
    _putchar(45);    
    return(-1);
    }
    else
    {
    _putchar(48);    
    return (0);
    }
}
