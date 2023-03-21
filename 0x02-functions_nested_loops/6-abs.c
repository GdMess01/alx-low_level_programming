#include "main.h"

/**
 * _abs - add absolute value of numbers
 * @c: The number to be checked
 * Return: -a if the number is negative and a if is positive
 */

int _abs(int a)
{
    if (a < 0)
    {
    int abs_val;
    abs_val = a * -1;
    return(abs_val);
    }
    return(a);
}
