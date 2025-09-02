#include <stdio.h>

int main() {
    float hoursWorked, ratePerHour, salary;

    printf("Enter total hours worked: ");
    scanf("%f", &hoursWorked);

    printf("Enter rate per hour: ");
    scanf("%f", &ratePerHour);

salary = hoursWorked * ratePerHour;

    printf("\nTotal Hours Worked: %.2f\n", hoursWorked);
    printf("Rate Per Hour: %.2f\n", ratePerHour);
    printf("Salary: %.2f\n", salary);

    return 0;
}
