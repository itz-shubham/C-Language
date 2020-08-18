#include<stdio.h>

float average(int a, int b, int c);

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("Average of a, b, and c is = %f", average(a, b, c));
    return 0;
}

float average(int a, int b, int c) {    // both a, b, c are diffrent. All functions have their own variables or
    float result;
    result = (float)(a + b + c)/3;
    return result;
}