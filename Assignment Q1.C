#include <stdio.h>
void decimalToBinary(int decimal) {
    int binary;
    while (decimal > 0) {
        binary = decimal % 2;
        printf("%d", binary);
        decimal = decimal / 2;
    }
}
void decimalToOctal(int decimal) {
    int octal;
    while (decimal > 0) {
        octal = decimal % 8;
        printf("%d", octal);
        decimal = decimal / 8;
    }
}
void decimalToHexadecimal(int decimal) {
    char hexa;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexa = '0' + remainder;
        } else {
            hexa = 'A' + (remainder - 10);
        }
        printf("%c", hexa);
        decimal = decimal / 16;
    }
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary: ");
    decimalToBinary(decimal);
    printf("\nOctal: ");
    decimalToOctal(decimal);
    printf("\nHexadecimal: ");
    decimalToHexadecimal(decimal);
    printf("\n");
    return 0;
}