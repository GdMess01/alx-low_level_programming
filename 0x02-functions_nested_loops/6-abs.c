#include "main.h"

/**
 * _abs - Add absolute value of numbers
 * @c: The number to be computed
 * Return: The absolute value or zero
 */

int _abs(int c)
{
    if (c < 0)
    {
    int abs_val;
    abs_val = c * -1;
    return(abs_val);
    }
    return(c);
}
