#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return 0;

    int maxDays;

    if (month == 2) {
        maxDays = isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else {
        maxDays = 31;
    }

    if (day > maxDays)
        return 0;

    return 1;
}

int calculateDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    int k = year % 100;
    int j = year / 100;

    int h = (day + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;

    // Zeller's formula: 0 = Saturday, 1 = Sunday, ..., 6 = Friday
    return h;
}

int main() {
    int day, month, year;

    printf("Enter date (DD-MM-YYYY): ");
    scanf("%d-%d-%d", &day, &month, &year);

    if (!isValidDate(day, month, year)) {
        printf("Invalid date\n");
    } else {
        printf("Valid date\n");

        int dow = calculateDayOfWeek(day, month, year);

        switch (dow) {
            case 0: printf("Day of the week: Saturday\n"); break;
            case 1: printf("Day of the week: Sunday\n"); break;
            case 2: printf("Day of the week: Monday\n"); break;
            case 3: printf("Day of the week: Tuesday\n"); break;
            case 4: printf("Day of the week: Wednesday\n"); break;
            case 5: printf("Day of the week: Thursday\n"); break;
            case 6: printf("Day of the week: Friday\n"); break;
            default: printf("Error calculating day of the week\n");
        }
    }

    return 0;
}
