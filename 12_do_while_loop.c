#include<stdio.h>

int main() {
    int i = 0;
    // i = 100;

    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i<10);    // do while loop exicute at least one time even condition is false

    return 0;
}