#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: integer to append to
 * @n: integer to add
 *
 * Return: an integer
 */
void reverse_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[n-i-1]);
        i++;
    }
    printf("\n");
}
