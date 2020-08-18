#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Your number %d is an even number", a);
    }
    else
    {
        printf("Your number %d is an odd number", a);
    }

    return 0;
}