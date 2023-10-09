#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
	for (b = (a + 1); b < 100; b++)
	{
		putchar('0' + (a / 10));
		putchar('0' + (a % 10));
		putchar(' ');
		putchar('0' + (b / 10));
		putchar('0' + (b % 10));
		if (!(a == 98 && b == 99))
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar("\n");
	return(0);
}	
