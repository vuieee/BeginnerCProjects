#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    printf("%d / %d = %d r.%d\n", num1, num2, num1 / num2, num1 % num2);

    return 0;
}