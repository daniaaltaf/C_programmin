#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int i;  

    printf("Array elements using pointers:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}

