// Write a program to find whether a year entered by user is a leap year or not

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year you want \n");
    scanf("%d", &year);

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("The year %d is a leap year (it has 366 days)", year);
    }
    else
    {
        printf("The year %d is not a leap year (it has 365 days)", year);
    }
    return 0;
}