#include <stdio.h>

int main() {
   float length, width, area;

   printf("Enter the length: ");
   scanf("%f", &length);

   printf("Enter the width: ");
   scanf("%f", &width);

   area = length * width;

   printf("Area of the rectangle is: %f\n", area);

   return 0;
}