#include <stdio.h>

int countSetBits(int number) {
    int count = 0;

    while (number != 0) {
        count += number & 1;
        number >>= 1;
    }

    return count;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int setBits = countSetBits(number);

    printf("The number of set bits in %d is: %d\n", number, setBits);

    return 0;
}

