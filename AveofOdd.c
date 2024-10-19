#include <stdio.h>

int main() {
    int start, end;
    int sum = 0, count = 0;

    
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    
    if (start > end) {
  printf("Invalid range. Start should be less than or equal to end.\n");
  return 1;
    }

    
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) { 
            sum += i;
            count++;
        }
    }

    
    if (count > 0) {
        double average = (double)sum / count;
        printf("The average of odd numbers in the range [%d, %d] is: %.2f\n", start, end, average);
    } else {
        printf("No odd numbers in the given range.\n");
    }

    return 0;
}
