#include <stdio.h>

int main() {
    int x, y, temp;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}
