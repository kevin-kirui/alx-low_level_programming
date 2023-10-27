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
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int numCoins = 0;

    numCoins += cents / 25;
    cents %= 25;

    numCoins += cents / 10;
    cents %= 10;

    numCoins += cents / 5;
    cents %= 5;

    numCoins += cents / 2;
    cents %= 2;

    numCoins += cents;

    printf("%d\n", numCoins);

    return 0;
}
