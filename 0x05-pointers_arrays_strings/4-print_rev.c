#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - write a reversed string
 * @s: te be added
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while(len--)
		putchar(*(s + len));
	putchar(10);
}
