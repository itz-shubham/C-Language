#include<stdio.h>

int main(){

    int a, b;

    printf("Enter your first number --> ");
    scanf("%d", &a);

    printf("Enter your second number --> ");
    scanf("%d", &b);

    printf("Sum of %d and %d is = %d", a, b, a+b);
    return 0;
}