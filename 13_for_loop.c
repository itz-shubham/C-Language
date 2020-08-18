#include<stdio.h>

int main() {

    // in for loop (initialize, test, increament or decreament)    

    // Increment
    // for (int a = 0; a<10; a++)
    // {
    //     printf("The value of a is %d\n", a+1);
    // }

    // Decrement
    for (int i = 5; i; i--)
    {
        printf("The value of a is %d\n", i);
    } // this for loop will keep running until i become 0. because any non zero value is false

    return 0;
}