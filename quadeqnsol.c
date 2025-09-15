#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    (a == 0) ? printf("Invalid equation. Coefficient 'a' cannot be zero.\n") :
    (
        discriminant = b * b - 4 * a * c,
        (discriminant > 0) ? (
            root1 = (-b + sqrt(discriminant)) / (2 * a),
            root2 = (-b - sqrt(discriminant)) / (2 * a),
            printf("Real and distinct roots: %.2f and %.2f\n", root1, root2)
        ) : (
            (discriminant == 0) ? (
                root1 = -b / (2 * a),
                printf("Real and equal roots: %.2f and %.2f\n", root1, root1)
            ) : (
                printf("Imaginary roots\n")
            )
        )
    );

    return 0;
}
