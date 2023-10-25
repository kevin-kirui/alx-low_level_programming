#include "main.h"

/**
  * _print_rev_recursion - Print string in reverse
  * @s: the string to reverse
  *
  * Return: 1 success.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
