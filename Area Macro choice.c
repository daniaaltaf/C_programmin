#include <stdio.h>

#define PI 3.14159
#define AREA_SQUARE(s) ((s) * (s))
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define AREA_TRIANGLE(b, h) (0.5 * (b) * (h))

int main() {
    int choice;
    float side, radius, base, height;

 
    printf("Choose a shape to calculate area:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

   
    switch (choice) {
        case 1:
            printf("Enter side of square: ");
            scanf("%f", &side);
            printf("Area of square = %.2f\n", AREA_SQUARE(side));
            break;
        
        case 2:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            printf("Area of circle = %.2f\n", AREA_CIRCLE(radius));
            break;

        case 3:
            printf("Enter base and height of triangle: ");
            scanf("%f%f", &base, &height);
            printf("Area of triangle = %.2f\n", AREA_TRIANGLE(base, height));
            break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}

