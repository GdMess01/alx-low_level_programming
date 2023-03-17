#include<stdio.h>

/**
* main - print the alphabet in lowercase
* 
* Description: using the main function
* this program prints "the alphabet in lowercase, followed by a new line
* Return: 0
*/

int main() {
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        putchar(str[i]);
    }

    return (0);
}
