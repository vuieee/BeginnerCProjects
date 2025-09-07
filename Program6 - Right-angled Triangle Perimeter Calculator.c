#include <stdio.h>
#include <math.h> // Required for the sqrt() function

int main() {
    float base, height, hypotenuse, perimeter;

    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);
    hypotenuse = sqrt((base * base) + (height * height));
    perimeter = base + height + hypotenuse;
    printf("The perimeter of the right-angled triangle is: %.2f\n", perimeter);

    return 0;
}