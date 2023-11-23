#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Determines the endianness of the system
 *
 * This function checks whether the system is little endian or big endian.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((*c == 1) ? 1 : 0);
}
int main(void)
{
	if (get_endianness() == 0)
	{
		putchar('0');
	}
	else
	{
		putchar('1');
	}
	return (0);
}

