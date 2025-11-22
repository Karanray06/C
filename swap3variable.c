#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;
    int temp;

    // Print original values
    printf("Before swapping:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // Swap values: a -> b, b -> c, c -> a
    temp = a;
    a = b;
    b = c;
    c = temp;

    // Print swapped values
    printf("After swapping:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}