#include <stdio.h>

int main()
{
    int num;

    printf("Enter your number\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Your number is 1\n");
    }
    else if (num == 2)
    {
        printf("Your number is 2");
    }
    else if (num == 3)
    {
        printf("Your number is 3");
    }
    else //last else is optional
    {
        printf("It's not 1, not 2 and nor 3");
    }

    return 0;
}