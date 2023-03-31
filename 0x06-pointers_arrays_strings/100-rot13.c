#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - rotate 13 character forward
 * @s: to be added
 * 
 * Return: a character
 */

char *rot13(char *s) 
{
    int i, n = strlen(s);
    for (i = 0; i <= n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
        {
            s[i] = s[i] + 13;
        }
        else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
        {
            s[i] = s[i] - 13;
        }
        
    }
    return(s);
}
