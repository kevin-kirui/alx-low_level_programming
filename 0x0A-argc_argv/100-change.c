#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints minimum number of coins to make change for an amount
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[]) 
{
	
	if (argc != 2) 
	{
		return 1;
	}
int cents = atoi(argv[1]);
	if (cents < 0)
	{
		return 0;
	}
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
    	int count = 0;
	
		for (int i = 0; i < num_coins; i++) 
		{
        	count += cents / coins[i];
        	cents %= coins[i];
		}
		return 0;
}
