#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    int result = a / b;
    printf("Result of %d / %d = %d\n", a, b, result);
    return 0;
}