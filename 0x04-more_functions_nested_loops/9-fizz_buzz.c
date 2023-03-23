#include <stdio.h>

/**
* main - prints Fizz | Buzz or FizzBuzz
* Return: 0
*/
int main() {
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz ");
        }
        else if (i % 5 == 0){
            if (i == 100){
                printf("Buzz");
                printf("\n");
            }
            else{
                printf("Buzz ");
            }  
        }    
        else if (i % 3 == 0){
            printf("Fizz ");
        }
        else{
            printf("%d ", i);
        }
    i++;    
    }

    return 0;
}
