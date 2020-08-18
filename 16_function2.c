#include<stdio.h>
int sum(int a, int b);  //Function prototype declaration

int main() {
    int c;
    c = sum(1, 6);  //Function call
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b) {
    int result;
    result = a + b;
    return result;
}

// int sum(int a, int b) {
//     int c;
//     c = a + b;
//     return c;
// }
// Both c will be deferent it will not affect anything