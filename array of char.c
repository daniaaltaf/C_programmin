#include <stdio.h>

int main() {
    char arr[] = {'u', 'v', 'x', 'y', 'z'};
    int size = 5;
    int i;  

    printf("Contents of the character array: ");
    for (i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}

