#include<stdio.h>

int main() {
    int n, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }

    }

    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 1)
        {
            printf("%d is not a prime number.", n);

        }
        else
        {
            printf("%d is a prime number.", n);
        }

    }


    return 0;
}