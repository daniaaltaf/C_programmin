#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first operand: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second operand: ");
    scanf("%d", &b);

    (op == '+') ? printf("Result: %d\n", a + b) :
    (op == '-') ? printf("Result: %d\n", a - b) :
    (op == '*') ? printf("Result: %d\n", a * b) :
    (op == '/' && b != 0) ? printf("Result: %d\n", a / b) :
    (op == '/' && b == 0) ? printf("Error: Division by zero\n") :
    (op == '%' && b != 0) ? printf("Result: %d\n", a % b) :
    (op == '%' && b == 0) ? printf("Error: Modulo by zero\n") :
    printf("Error: Invalid operator\n");

    return 0;
}
