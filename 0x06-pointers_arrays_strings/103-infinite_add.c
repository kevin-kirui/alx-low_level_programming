#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer that stores the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result, 0 if the result cannot be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r) 
{
    int len_n1 = 0, len_n2 = 0, carry = 0, sum, max_len, i, j;
    while (n1[len_n1] != '\0') 
    {
        len_n1++;
    }
    while (n2[len_n2] != '\0') 
    {
        len_n2++;
    }
    if (len_n1 >= len_n2) 
    {
        max_len = len_n1;
    } else {
        max_len = len_n2;
    }
    if (max_len + 1 > size_r) 
    {
        return 0;
    }
    r[max_len + 1] = '\0';
    for (i = len_n1 - 1, j = len_n2 - 1, sum = 0; max_len >= 0; i--, j--, max_len--) 
    {
        if (i >= 0) 
	{
            sum += n1[i] - '0';
        }
        if (j >= 0) 
	{
            sum += n2[j] - '0';
        }
        sum += carry;
        r[max_len] = sum % 10 + '0';
        carry = sum / 10;
        sum = 0;
    }
    if (r[0] == '0') 
    {
        return r + 1;
    }
    return r;
}
    return 0;
}
