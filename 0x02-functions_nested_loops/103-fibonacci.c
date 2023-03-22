#include <stdio.h>

/**
 * main - prints the fibonacci numbers < 4000000 and even
 * Return: Always success
 */
int main(void) 
{
    long f, f1 = 2, f2 = 1, sum = f1;
    while (f < 4000000)
    {
        f = f1 + f2;
        f2 = f1;
        f1 = f;
        if (f % 2 == 0 )
        {
            sum += f;
                
        }
    }
    printf("%d\n", sum);
    
return 0;
}
