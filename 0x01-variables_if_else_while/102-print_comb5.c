#include <stdio.h>

/**
* main - print all possible combinations of two two-digit numbers
* 
* Description: using the main function
* this program prints "all possible combinations of two digit numbers
* Return: 0
*/
int main() {
    int i, j, k;
    for (i = 0; i < 100; i++) {
        for (j = 48; j <= 57; j++){
            for (k = 48; k <= 57; k++){
                if(i != j && i != k && j != k){
                    putchar(i/10 + '0'); // print tens digit
                    putchar(i%10 + '0'); // print ones digit
                    putchar(' '); // print space
                    putchar(j);
                    putchar(k);
                    putchar(',');
                }
            }
        }
    }
    return 0;
}
