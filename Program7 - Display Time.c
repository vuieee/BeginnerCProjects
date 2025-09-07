#include <stdio.h>

int main() {
    int hours, minutes;
    char meridian[3];  

    printf("Enter hours (1-12): ");
    scanf("%d", &hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);
    printf("Enter meridian (AM/PM): ");
    scanf("%s", meridian);
    printf("\nTime is: %02d:%02d %s\n", hours, minutes, meridian);

    return 0;
}
