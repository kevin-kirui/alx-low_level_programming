#include "main.h"
#include <stdio.h>

/**
  * swap_int - Swaps the values of two integers
  *
  * temp: Stores interger temporarily
  * @a: Integer1 to swap
  * @b: Integer2 to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
        int temp;

        temp = *a;
	*a = *b;
	*b = temp;
}
