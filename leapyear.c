#include <stdio.h>

int isLeapYear(int year) {
    
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int startYear, endYear;

    
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    
    if (startYear > endYear) {
        printf("Invalid range. Start year should be less than or equal to end year.\n");
        return 1;
    }

    
    printf("Leap years between %d and %d are:\n", startYear, endYear);
    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            printf("%d ", year);
        }
    }
    printf("\n");

    return 0;
}
