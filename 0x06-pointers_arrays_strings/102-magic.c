#include "main.h"
#include <stdio.h>

/**
 * main - Prints a[2] = 98, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[5];
    int *p;

    a[2] = 102;
    p = &a[2];

    *(p + 1) = 98;

    printf("a[2] = %d\n", a[2]);
    return (0);
}
