#include<stdio.h>
int sum(int a, int b);

int main() {
    int x = 1, y = 3;
    printf("Before the function exicuted. The value of a = %d and b = %d\n", x, y);
    printf("The sum of a and b is equal to %d\n", sum(x, y));
    printf("After the function exicuted. The value of a = %d and b = %d\n", x, y);
    // Value will not change

    return 0;
}

int sum(int a, int b) {
    int c;
    c = a + b;
    a = 123;
    b = 456;
    
    return c;
}