#include <stdio.h>

int main(void) {
    for (int a = 0; a <= 99; a++)
        for (int b = b + 1; b <= 99; b++)
            printf("%02d %02d%c", a, b, (a == 98 && b == 99) ? '\n' : ',');

    return 0;
}
