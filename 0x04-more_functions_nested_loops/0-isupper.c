#include "main.h"

/**
* _isupper - checks if the number is upper or not
* @c: intger to be used
* Return: 1 if is upper and 0 if is not
*/
int _isupper(int c) 
{
    if (c >= 'A' && c <= 'Z')
    {
	    return (1);
    }
    return (0);
}
