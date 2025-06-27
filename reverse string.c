#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;  // Declare loop variable here

    printf("Enter a string: ");
    scanf("%s", str);  // Note: This reads input only until the first space

    // Calculate string length manually
    while (str[length] != '\0') {
        length++;
    }

    // Print reversed string
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

