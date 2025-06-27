#include <stdio.h>

float conversion(float faren)
{
    float cel;
    cel = (5.0 / 9.0) * (faren - 32);
    return cel;
}

int main()
{
    float faren;
    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f", &faren);
    
    printf("The temperature in Fahrenheit is: %.2f\n", faren);
    printf("The temperature in Celsius is: %.2f\n", conversion(faren));
    
    return 0;
}

