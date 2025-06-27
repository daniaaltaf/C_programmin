#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

   
    printf("Enter a number: ");
    scanf("%d", &n);

   
    if (n == 0) {
        printf("0! = 1\n");
        return 0;
    }

   
    for (i = 1; i <= n; i++) {
        factorial *= i;
        printf("%d", i);
        if (i < n)
            printf(" * "); 
    }

    printf(" = %llu\n", factorial);
    return 0;
}
