#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are old enough to vote, please proceed to the voting station.\n");
    } else {
        printf("You are not old enough to vote, you will be escorted out.\n");
    }

    return 0;
}
