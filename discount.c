#include <stdio.h>

int main() {
    float purchase, discount, total;

    printf("Enter purchase amount: Rs ");
    scanf("%f", &purchase);

    discount = (purchase < 100) ? 0 :
               (purchase <= 500) ? 0.10 * purchase :
               (purchase <= 1000) ? 0.15 * purchase :
               0.20 * purchase;

    total = purchase - discount;

    printf("Discount applied: Rs %.2f\n", discount);
    printf("Total price after discount: Rs %.2f\n", total);

    return 0;
}
