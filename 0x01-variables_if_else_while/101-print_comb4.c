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
    int k;
    for (i = 48; i <= 57; i++)
    {
        for (j = 48; j <= 57; j++)
        {
            for (k = 48; k <= 57; k++)
            {
                
                if (i < j && i < k && j < k) 
                {
                    putchar(i);
                    putchar(j);
                    putchar(k);
                    if (i != 55 || j != 56 || k != 57){
                        putchar(',');
                        putchar(' ');
                    }
                    
                }
            }
        }
    }

    return 0;
}
