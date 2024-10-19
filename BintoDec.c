#include <stdio.h>

void decimalToBinary(int n) {

    int binary[32];
    int num = 0;

    
    while (n > 0) {
        binary[num] = n % 2;  
        n = n / 2;          
        num++;
    }

    printf("Binary representation: ");
    for (int i = num - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}
