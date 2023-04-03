#include "main.h"

/**
 * _memcpy - copy memory area
 * pointed to by @s with the constant byte @c.
 * @dest: char to be added
 * @src: char to be added
 * @n: integer to be added
 * Return: characters.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
