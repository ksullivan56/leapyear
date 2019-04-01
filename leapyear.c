#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int year;
    do
    {
        year = get_int("Enter a year: "); //gets input from user
    }while (year <= 0);

    int calc = year % 4; //takes remainder of inputted year divided by 4 to see if its a leap year

    if (calc == 0) //if there is no remainder
    {
        printf("%d is a leap year!\n" , year); //its a leap year
    }
    else if (calc > 0) //if there is a remainder
    {
        printf("%d is not a leap year.\n" , year); //its not a leap year
    }
}