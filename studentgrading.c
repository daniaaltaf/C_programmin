#include <stdio.h>

int main() {
    int marks[5], i, fail_count = 0;
    float total = 0, percentage;

    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        if(marks[i] < 40) {
            fail_count++;
        }
        total += marks[i];
    }

    percentage = total / 5;

    if(fail_count > 1) {
        printf("Repeat Year\n");
    } else {
        if(percentage >= 90) {
            printf("Grade: A\n");
        } else {
            if(percentage >= 75) {
                printf("Grade: B\n");
            } else {
                if(percentage >= 60) {
                    printf("Grade: C\n");
                } else {
                    if(percentage >= 40) {
                        printf("Grade: D\n");
                    } else {
                        printf("Grade: F\n");
                    }
                }
            }
        }
    }

    return 0;
}
