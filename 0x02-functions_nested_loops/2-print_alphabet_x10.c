#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets ten times
 * Return: Always 0
 */

void print_alphabet_x10(void) 
{
    
    int i;
    char al;
    for (i = 1; i <= 10; i++)
    {
        for (al = 'a'; al <= 'z'; al++)
        {
            _putchar(al);
            
        }
        _putchar('\n');
    }
    
}
