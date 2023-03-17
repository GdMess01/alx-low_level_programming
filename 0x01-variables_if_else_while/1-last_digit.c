#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the last digit
* 
* Description: using the main function
* this program prints "test the last digit of a number 
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	if (last_digit != 0 && last_digit < 6)
	{
	    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else if (last_digit > 5)
	{
	    printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
	    printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	/* your code goes there */
	return (0);
}
