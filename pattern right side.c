#include <stdio.h>

int main() {
    int rows = 4;
    int i, j, k;  // Declare all loop variables before use

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

