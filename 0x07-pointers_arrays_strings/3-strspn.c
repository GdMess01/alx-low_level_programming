#include "main.h"

/**
 * int _strspn - gets the length of a prefix substring
 * @s: char to be added
 * @accept: char to be added
 * 
 * Return: an integer.
 */
unsigned int _strspn(char *s, char *accept)
{ 
    int i, j, count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count += 1;
		break;
            }
        }
	if (accept[j] == '\0')
            break;
    }
    return (count);
}
