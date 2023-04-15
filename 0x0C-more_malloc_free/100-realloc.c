#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memcpy - copies memory area.
 * @dest: the memory area to be filled
 * @src: the origin memery area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the memory area dest.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size > old_size)
    {
        ptr = malloc(new_size);
    }
    else if (new_size == old_size)
    {
        return (ptr);
    }
    else if (ptr == NULL)
    {
        ptr = malloc(new_size);
    }
    else if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }
    return(ptr);
}
