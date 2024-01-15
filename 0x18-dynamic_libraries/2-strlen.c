#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns string length
 * @s: String to be measured
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
