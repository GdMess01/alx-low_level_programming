#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a  reverse string, followed by a new line
 * @s: ti be added
 * 
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0') 
    {
        _print_rev_recursion(s+1);
        putchar(*s);
    } 
}
