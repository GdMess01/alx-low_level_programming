#include "main.h"
#include <string.h>

/**
 * _strncpy - copy strings
 * @dest: string to append to
 * @src: string to add
 * @n: integer to add
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
        strncpy(dest, src, n);
}
