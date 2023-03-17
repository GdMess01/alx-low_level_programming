#include<stdio.h>

/**
* main-print the alphabet in lowercase
* 
* Description:using the main function
* this program prints "the alphabet in lowercase, followed by a new line
* Return:0
*/

int main(void) {
    int i;
    for (i = '0'; i <= '9'; i++) 
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
