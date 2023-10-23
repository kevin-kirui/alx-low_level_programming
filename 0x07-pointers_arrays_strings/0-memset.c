#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

int main() 
{
  char str[50] = "Welcome to the linuxhint.";
  
  for (int i = 0; i <= 25; i++) 
  {
	  memset(str + 13, '.', 8*sizeof(char)); 
	  putchar(str[i]);

  }

  return 0;

}
