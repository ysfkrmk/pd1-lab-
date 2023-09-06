#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Please enter 2 digits:\n ");
    scanf("%d %d", &num1, &num2);
    int result = Multiply(num1, num2);
    printf("Multiply of 2 digits: %d\n", result);
    
    return 0;
}

int Multiply(int x, int y)
{
    if (y == 0) {
        return 0;
    }
    else if (y > 0) {
        return (x + Multiply(x, y - 1));
    }
    else {
        return (-Multiply(x, -y));
    }
}


