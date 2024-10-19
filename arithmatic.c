#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
 
    for (int i = 0; i < b; i++) {
        result += a; 
    }

    return result;
}
int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    int product = multiply(num1, num2);

    printf("The multiplication of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
