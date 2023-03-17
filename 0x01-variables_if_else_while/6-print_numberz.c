#include <stdio.h>

/**
* main - print the numbers 0-9
* 
* Description: using the main function
* this program prints "the numbers 0-9 with putchar
* Return: 0
*/
int main() 
{
    void print_digits()
    {
        int i;
        for (i = 0; i < 10; i++) 
        { 
            putchar(i + '0');
        }
        
    }
    print_digits();
    return (0);
}
