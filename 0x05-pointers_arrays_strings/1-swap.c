#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two values
 * @a: te be added
 * @b: to be added
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
    int temp1, temp2;
    temp1 = *a;
    temp2 = *b;
    *a = temp2;
    *b = temp1;
}
