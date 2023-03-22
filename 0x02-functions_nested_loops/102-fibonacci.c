#include <stdio.h>

/**
 * main - prints the forst 50 numbers of fibonacci numbers
 * Return: Always success
 */
int main(void) 
{
    int i = 0;
    long f, f1 = 2, f2 = 1;
    while (i < 50)
    {
        if (i == 0)
        printf("%ld", f2);
        else if (i == 1)
        printf(", %ld", f1);
        else
        {
            f = f1 + f2;
            f2 = f1;
            f1 = f;
            printf(", %ld", f);
        }
        i++;
    }
    printf("\n");
    
return 0;
}
