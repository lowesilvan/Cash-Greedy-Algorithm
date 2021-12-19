#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //initialize variable
    float dollar;
    //enter change loop
    do
    {
        dollar = get_float("Change owed: ");
    }
    while (dollar <= 0);

    int cents = round(dollar * 100);
    int coins = 0;
    
    //change 
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }
    
    printf("Sorry You will need at least %i coins to be able to collect your change\n", coins);
}