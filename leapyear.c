#include <stdio.h>

int main() {
    int year, count = 0, nextYear;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
                nextYear = year + 1;
                while (count < 5) {
                    if (nextYear % 4 == 0) {
                        if (nextYear % 100 == 0) {
                            if (nextYear % 400 == 0) {
                                printf("Next leap year: %d\n", nextYear);
                                count++;
                            }
                        } else {
                            printf("Next leap year: %d\n", nextYear);
                            count++;
                        }
                    }
                    nextYear++;
                }
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
        nextYear = year + 1;
        while (count < 5) {
            if (nextYear % 4 == 0) {
                if (nextYear % 100 == 0) {
                    if (nextYear % 400 == 0) {
                        printf("Next leap year: %d\n", nextYear);
                        count++;
                    }
                } else {
                    printf("Next leap year: %d\n", nextYear);
                    count++;
                }
            }
            nextYear++;
        }
    }

    return 0;
}
