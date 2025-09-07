#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 5 == 0) {
        printf("FIZZBUZZ\n");
    } else if (num % 2 == 0) {
        printf("FIZZ\n");
    } else if (num % 5 == 0) {
        printf("BUZZ\n");
    } else {

        printf("\n");
    }

    return 0;
}
