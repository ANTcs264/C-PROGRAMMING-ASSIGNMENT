#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, digits = 0;

    originalNum = num;

    
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }


    return result == num;
}

int main() {
    int startRange, endRange;

    
    printf("Enter the start of the range: ");
    scanf("%d", &startRange);
    printf("Enter the end of the range: ");
    scanf("%d", &endRange);

    
    if (startRange > endRange) {
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }

    printf("Armstrong numbers between %d and %d are:\n", startRange, endRange);
    for (int i = startRange; i <= endRange; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
