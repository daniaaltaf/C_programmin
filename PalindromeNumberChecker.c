#include <stdio.h>

int isPalindrome(int num) {
    int original = num, reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return (original == reversed);
}

int main() {
    int number, start, end;

    printf("Enter a number to check if it is a palindrome: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    printf("Enter range to print palindrome numbers (start end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
