#include "main.h"
#include <stdio.h>
/**
  * rev_string - Reverses a string
  * @s: String to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
    int length = 0, i;
    char temp;

    if (s == NULL)
        return;

    while (s[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
