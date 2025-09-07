#include <stdio.h>

int main() {
    int category, hours;
    float rate, salary;
    
    printf("Enter total hours worked: ");
    scanf("%d", &hours);

    printf("Enter category: 1(RATE=300), 2(RATE=275), or 3(RATE=200)): ");
    scanf("%d", &category);

    if (category == 1) {
        rate = 300;
    } else if (category == 2) {
        rate = 275;
    } else if (category == 3) {
        rate = 200;
    } else {
        printf("Invalid category!\n");
        return 0;  
    }

    salary = hours * rate;

    printf("Salary: %.2f\n", salary);

    return 0;
}
