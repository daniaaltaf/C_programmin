#include <stdio.h>
#define PI 3.14159
#define AREA_SQUARE(s) ((s) * (s))
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define AREA_TRIANGLE(b, h) (0.5 * (b) * (h))

int main() {
    float side, radius, base, height;

   
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area of square = %.2f\n", AREA_SQUARE(side));

   
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle = %.2f\n", AREA_CIRCLE(radius));

    
    printf("Enter base and height of triangle: ");
    scanf("%f%f", &base, &height);
    printf("Area of triangle = %.2f\n", AREA_TRIANGLE(base, height));

    return 0;
}
