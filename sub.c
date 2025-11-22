#include <stdio.h>
12
int main() {
    int a , b, sub;
    printf("Enter the first integer:");
    scanf("%d", &a);
    printf("Enter the secong integer:");
    scanf("%d", &b);
    sub= a - b;
    printf("The subtraction of %d and %d is %d\n", a ,b , sub);
    return 0;
}