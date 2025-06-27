#include <stdio.h>

int main() {
    int i;

    printf("Using continue:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skips the current iteration when i is 5
        }
        printf("%d ", i);
    }

    printf("\nUsing break:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exits the loop when i is 5
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

