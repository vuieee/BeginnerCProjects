#include <stdio.h>
#include <math.h>   

int main() {
    double a, b, c;

    printf("Enter side a: ");
    scanf("%lf", &a);
    printf("Enter side b: ");
    scanf("%lf", &b);
    c = sqrt((a * a) + (b * b));
    printf("The hypotenuse is: %.2lf\n", c);

    return 0;
}
