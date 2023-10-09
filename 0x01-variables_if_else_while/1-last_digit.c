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
		printf("greater than 5.\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("O\n");
	}
	else
	{
		printf("Less than 6 and not O.\n");
	}
	return (0);
}
