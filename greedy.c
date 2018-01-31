#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){

    float dollars;
    int quarter = 25, dime = 10, nickel = 5, penny = 1;
    //Variable declared to keep track of number of coins
    int countCoins = 0;
	
	//Input
    do{
        dollars = get_float("O hai! How much change is owed? ");
    }while(dollars < 0);

    int cents = (int) round(dollars*100);

    while (cents > 0)
    {
        if (cents >= quarter)
            cents = cents - quarter;
        else if (cents >= dime)
            cents = cents - dime;
        else if (cents >= nickel)
            cents = cents - nickel;
        else if (cents >= penny)
            cents = cents - penny;
        countCoins += 1;
    }
	
    printf("Minimum no. of coins: %d\n", countCoins);
}
