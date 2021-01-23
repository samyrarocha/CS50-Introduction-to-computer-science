#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Asking for the value
    float dollar = get_float("Change owed: ");
    while (dollar <= 0)
    {
        printf("You owe nothing. Do you want to try again? \n");
        dollar = get_float("Change owed: ");
    }
    
    //Calculating coins
    int cents = round(dollar * 100);
    int coins;
    coins = 0;
    while (cents >= 25)
    {
        coins = coins + 1;
        cents = cents - 25;
    }
    while (cents >= 10)
    {
        coins = coins + 1;
        cents = cents - 10;
    }
    while (cents >= 5)
    {
        coins = coins + 1;
        cents = cents - 5;
    }
    while (cents >= 1)
    {
        coins = coins + 1;
        cents = cents - 1;
    }
    printf("Coins: %i\n", coins);
}