#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;

    printf("Enter your age \n");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || vipPass == 1)
    // if ((age <= 70 && age >= 18) || !(vipPass == 1))
    {
        printf("You can drive");
    }
    else
    {
        printf("Your cannot drive");
    }

    return 0;
}