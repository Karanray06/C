#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping using addition and subtraction
    a = a + b; // a now holds the sum of original a and b
    b = a - b; // b now holds the original value of a (sum - original b)
    a = a - b; // a now holds the original value of b (sum - original a)

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}