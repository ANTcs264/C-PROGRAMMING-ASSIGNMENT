#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    do {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &number);

        if (number > 0) {
            sum += number; 
        }

    } while (number != -1); 

    printf("Sum of positive numbers: %d\n", sum);

    return 0;
}
