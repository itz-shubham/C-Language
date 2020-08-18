#include<stdio.h>
// int fibonacci(int n);

int main() {
    int a = 0, b = 1, c = 1, n;

    printf("How many numbers you want from fibonacci series?\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("lol!");
    }
    else if (n == 1)
    {
        printf("Here it is: 0");
    }
    else if (n == 2)
    {
        printf("Here it is: 0, 1");
    }
    else
    {
        printf("Here it is: 0, 1");
        for (int i = 0; i <= n-3; i++)
        {
            printf(", %d", c);

            a = b;
            b = c;
            c = a + b;
        }
    }


    return 0;
}

// 0, 1, 1, 2, 3, 5, 