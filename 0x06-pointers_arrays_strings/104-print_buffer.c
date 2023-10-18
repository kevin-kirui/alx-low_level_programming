#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: Buffer to print.
 * @size: Size of the buffer.
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        putchar('\n');
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        for (j = 28; j >= 0; j -= 4)
        {
            putchar("0123456789abcdef"[(i >> j) & 0x0F]);
        }
        putchar(':');
        putchar(' ');

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                putchar("0123456789abcdef"[(unsigned char)b[i + j] >> 4]);
                putchar("0123456789abcdef"[(unsigned char)b[i + j] & 0x0F]);
            }
            else
            {
                putchar(' ');
                putchar(' ');
            }

            if (j % 2)
            {
                putchar(' ');
            }
        }

        for (j = 0; j < 10; j++)
        {
            if (i + j >= size)
                break;

            if (b[i + j] >= 32 && b[i + j] <= 126)
                putchar(b[i + j]);
            else
                putchar('.');
        }

        putchar('\n');
    }
}
