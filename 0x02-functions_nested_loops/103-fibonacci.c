#include <stdio.h>

/**
 * main - prints the fibonacci numbers < 4000000 and even
 * Return: Always success
 */
int main(void) 
{
    int i = 0;
    long f, f1 = 2, f2 = 1;
    while (i < 32)
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
            if (f % 2 == 0)
            {
                printf(", %d", f);
            }
        }
        i++;
    }
    printf("\n");
    
return 0;
}
