#include "main.h"

/**
 * _strchr - locates a character in a string
 * pointed to by @s with the constant byte @c.
 * @s: char to be added
 * @c: char to be added
 * 
 * Return: characters.
 */
char *_strchr(char *s, char c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return(s+i);
        }
    }
    return('\0');
}
