#include <stdio.h>
#include <math.h>

int main() {
    double real1, imag1, real2, imag2;
    double mag1, mag2;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%lf %lf", &real1, &imag1);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%lf %lf", &real2, &imag2);

    mag1 = sqrt(real1 * real1 + imag1 * imag1);
    mag2 = sqrt(real2 * real2 + imag2 * imag2);

    if (mag1 > mag2) {
        printf("First complex number has higher magnitude\n");
    } else if (mag2 > mag1) {
        printf("Second complex number has higher magnitude\n");
    } else {
        printf("Equal\n");
    }

    return 0;
}
