#include <stdio.h>

int main() {
    int n;
    int i;  // Declare loop variable outside the for loop

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

