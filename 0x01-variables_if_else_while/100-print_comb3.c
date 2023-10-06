#include <stdio.h>

int main(void) {
    int k, l;

    for (k = 30; k <= 38; k++) {
        for (l = 39; l <= 47; l++) {
            if (k != l) {
                printf("%d%d", k, l);

                if (k != 9 || l != 8) {
                    printf(", "); 
                }
            }
        }
    }

    printf("\n"); 

    return 0;
}
