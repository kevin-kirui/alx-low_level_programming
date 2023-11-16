#include <stdio.h>

/**
 * beforeMain - Prints a message before main execution.
 *
 * Prints Message
 *
 * Call this function before executing the main function.
 *
 * return success
 */
void printMessage(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
int main(void)
{
	printMessage();
	return (0);
}
