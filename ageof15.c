#include <stdio.h>

int main() {
    int ages[15];
    int babyCount = 0, schoolCount = 0, adultCount = 0;

    printf("Enter the ages of 15 people:\n");
    for (int i = 0; i < 15; i++) {
        printf("Age of person %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    for (int i = 0; i < 15; i++) {
        if (ages[i] >= 0 && ages[i] <= 5) {
            babyCount++;
        } else if (ages[i] >= 6 && ages[i] <= 17) {
            schoolCount++;
        } else if (ages[i] >= 18) {
            adultCount++;
        }
    }

    printf("\nNumber of babies (age 0 to 5): %d\n", babyCount);
    printf("Number of school-age children (age 6 to 17): %d\n", schoolCount);
    printf("Number of adults (age 18 and over): %d\n", adultCount);

    return 0;
}
