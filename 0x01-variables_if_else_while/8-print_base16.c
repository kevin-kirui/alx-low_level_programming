#include <stdio.h>

int main(void) {
    printf("Base 16 numbers in small letters:\n");

    for (char c = '0'; c <= '9'; c++) {
        putchar(c);
        putchar('\n');
    }

    for (char c = 'a'; c <= 'f'; c++) {
        putchar(c);
        putchar('\n');
    }

   

    return (0);
}
