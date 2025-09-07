#include <stdio.h>

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

 
    x = x + y;  
    y = x - y;  
    x = x - y;  

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}
