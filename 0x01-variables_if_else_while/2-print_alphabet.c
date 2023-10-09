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
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
