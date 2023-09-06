#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, exponent, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent number: ");
    scanf("%d", &exponent);
    result = power(base, exponent);
    printf("%d^%d = %d", base, exponent, result);
    return 0;
}

int power(int base, int exponent) {
    if (exponent != 0)
    {
    	return (base * power(base, exponent - 1));
	}
        
    else
    {
    	return 1;
	}
        
}
