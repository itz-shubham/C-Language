#include<stdio.h>

int main(){
    int rating;

    printf("Enter your rating(1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is %d\n", rating);
        break;
    case 2:
        printf("Your rating is %d\n", rating);
        break;
    case 3:
        printf("Thanks you for %d star rating\n", rating);
        break;
    case 4:
        printf("Thanks you for %d star rating\n", rating);
        break;
    case 5:
        printf("Thanks you for %d star rating\n", rating);
        break;
    
    default:
        printf("Invalid rating! Please choose rating 1 to 5", rating);
        break;
    }

    return 0;
}