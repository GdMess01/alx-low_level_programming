#include<stdio.h>

/**
* main-print the alphabet in lowercase
* 
* Description:using the main function
* this program prints "the alphabet in lowercase, followed by a new line
* Return:0
*/

int main(void) {
    char ca;
    for (ca = 'z'; ca >= 'a'; ca--) 
    {
        putchar(ca);
    }
    putchar('\n');
    return (0);
}
