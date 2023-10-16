#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#define PASSWORD_LENGTH 16

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int main(void)
{
    srand(time(0));

    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
