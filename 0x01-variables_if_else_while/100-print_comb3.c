#include <stdio.h>

/**
 * main - print the combination of brains and materials
 * 
 * Description: using the main function
 * this program prints "all possible different combinations of two digits
 * Return: 0
 */
int main()
{
    int i;
    int j;
    for (i = 48; i <= 57; i++)
    {
        for (j = 48; j <= 57; j++)
        {
            if (i < j )
            {
                putchar(i);
                putchar(j);
                if (i != 56 || j != 57) 
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    return 0;
}
