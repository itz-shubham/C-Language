#include<stdio.h>
int tenTimes(int *a){
    *a = (*a * 10);
}

int main() {
    int x = 5;

    printf("The value of x is %d\n", x);
    tenTimes(&x);
    printf("Now the value of x is %d\n", x);
    
    return 0;
}