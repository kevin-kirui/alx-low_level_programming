#include "main.h"
 /**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * Description: This function prints the lowercase alphabet 10 times.
 * It starts with 'a' and goes up to 'z', repeating the process 10 times.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
