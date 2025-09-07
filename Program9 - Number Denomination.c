#include <stdio.h>

int main() {
    float money;
    int amount;
    float remainder;
    int thousands, fiveHundreds, hundreds, fifties, twenties, tens, fives, ones;
    int twentyFiveCents, tenCents, fiveCents, oneCent;

    printf("Enter an amount: ");
    scanf("%f", &money);

    amount = (int) money;
    remainder = money - amount;

    thousands = amount / 1000; amount %= 1000;
    fiveHundreds = amount / 500; amount %= 500;
    hundreds = amount / 100; amount %= 100;
    fifties = amount / 50; amount %= 50;
    twenties = amount / 20; amount %= 20;
    tens = amount / 10; amount %= 10;
    fives = amount / 5; amount %= 5;
    ones = amount;

    int cents = (int)(remainder * 100 + 0.5);  

    twentyFiveCents = cents / 25; cents %= 25;
    tenCents = cents / 10; cents %= 10;
    fiveCents = cents / 5; cents %= 5;
    oneCent = cents;

    printf("\nDenomination breakdown:\n");
    printf("%d x 1000\n", thousands);
    printf("%d x 500\n", fiveHundreds);
    printf("%d x 100\n", hundreds);
    printf("%d x 50\n", fifties);
    printf("%d x 20\n", twenties);
    printf("%d x 10\n", tens);
    printf("%d x 5\n", fives);
    printf("%d x 1\n", ones);

    printf("%d x 0.25\n", twentyFiveCents);
    printf("%d x 0.10\n", tenCents);
    printf("%d x 0.05\n", fiveCents);
    printf("%d x 0.01\n", oneCent);

    return 0;
}
