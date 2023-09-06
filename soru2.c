#include <stdio.h>

int divide(int dividend, int divisor);

int main() {
    int dividend, divisor, result;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    result = divide(dividend, divisor);

    printf("Result: %d\n", result);

    return 0;
}

int divide(int dividend, int divisor) {
    if (dividend < divisor) {
        return 0;
    } else {
        return 1 + divide(dividend - divisor, divisor);
    }
}

