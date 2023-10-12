#include "main.h"

/**
  * print_alphabet - The code prints alphabet in lowercase.
  *
  * Return: void - Alphabet in lowercae from a to z.
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
