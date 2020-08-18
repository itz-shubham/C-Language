#include<stdio.h>
int factorial(int x);

int main(){
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    printf("The factorial of %d is %d", value, factorial(value));
    return 0;
}

int factorial(int x){
    printf("calling.. factorial(%d)\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}