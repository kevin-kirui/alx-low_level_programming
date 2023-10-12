#include "main.h"
 /**
 * print_alphabet_x10 - Prints the lowercase alphabet x10 times.
 *
 * Description - print_alphabet_x10 prints the lowercase alphabet x10 times.
 * It starts with 'a' and goes up to 'z', repeating the process x10 times.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');

		i++;
	}
}
