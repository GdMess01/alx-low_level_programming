#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
        int i, j;

        i = 0;
        j = 0;

        while (dest[i] != '\0')
                i++;

        while(j < n)
        {
            dest[i] = src[j];
                j++;
                i++;
        }

        dest[i] = '\0';

        return (dest);
}

