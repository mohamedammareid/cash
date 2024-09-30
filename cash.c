#include <cs50.h>
#include <stdio.h>

int calculate_coins(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("cash: ");
    }
    while (cents <= 0);

    int coins = calculate_coins(cents);
    printf("coins: %i\n", coins);
}

int calculate_coins(int cents)
{
    int coins = 0;

    // Count quarters (25 cents)
    while (cents >= 25)
    {
        coins++;
        cents -= 25;
    }

    // Count dimes (10 cents)
    while (cents >= 10)
    {
        coins++;
        cents -= 10;
    }

    // Count nickels (5 cents)
    while (cents >= 5)
    {
        coins++;
        cents -= 5;
    }

    // Count pennies (1 cent)
    while (cents >= 1)
    {
        coins++;
        cents -= 1;
    }

    return coins;
}
