#include<stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;

    printf("The value of variable a is %d\n", a);
    printf("The address of variable a is %d\n", ptr);
    printf("The value of variable ptr is %d\n", *ptr);

    return 0;
}