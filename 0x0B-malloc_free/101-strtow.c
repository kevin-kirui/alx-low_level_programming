#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_tab - Prints an array of string
 * @s: strings
 *
 * Return: nothing
 */
char **strtow(char *str);
	
	int main() {
  	char **words;

words = (char **)malloc(sizeof(char *) * 100);
	if (words == NULL) 
	{	
		printf("Error allocating memory for words.\n");
    		return 1;
	}
strtow("This is a sentence.", " ", words);
	for (int i = 0; words[i] != NULL; i++) 
	{
		for (int j = 0; words[i][j] != '\0'; j++) 
		{
			putchar(words[i][j]);
		}
		putchar(' ');
	}
	putchar('\n');
	for (int i = 0; words[i] != NULL; i++) 
	{
		free(words[i]);
	}
	free(words);
	return 0;
}
