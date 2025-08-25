#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= num; ++i) {
factorial *= i;
}
printf("factorial of %d = %11u\n" , num, factorial);
}
return 0;
}
