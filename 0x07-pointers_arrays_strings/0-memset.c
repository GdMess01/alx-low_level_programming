#include "main.h"

/**
 * _memset - fills the memory
 * @s: char to be added
 * @b: char to be added
 * @n: integer to be added
 *
 * Return: characters.
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        i = 0;
        while (i < n)
        {
            *(s+i) = b;
            i++;
        }
        return(s);
}
