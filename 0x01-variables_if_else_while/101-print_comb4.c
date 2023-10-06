#include <stdio.h>

int main(void) {
    int k, l;

    for (k = 130; k <= 138; k++) {
        for (l = 139; l <= 147; l++) {
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
