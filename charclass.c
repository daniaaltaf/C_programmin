#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Uppercase vowel\n");
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Lowercase vowel\n");
            break;
        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                printf("Consonant\n");
            else if (ch >= '0' && ch <= '9')
                printf("Digit\n");
            else
                printf("Special character\n");
    }

    return 0;
}
