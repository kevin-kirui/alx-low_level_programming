nclude <stdio.h>

int main(void) {
    char str[] = "alphabet"; 
    int length = strlen(str);
    int i;

    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    putchar("\n");

    return 0;
}
