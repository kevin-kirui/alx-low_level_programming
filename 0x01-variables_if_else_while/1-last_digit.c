#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (success)
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5.\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("The last digit of %d is 0\n", n);

	}
	else
	{
		printf("The last digit of %d is less than 6 and not 0.\n", n);

	}
	return (0);
}
