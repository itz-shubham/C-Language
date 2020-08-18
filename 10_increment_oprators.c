#include<stdio.h>

int main() {
    int i = 5;

    // printf("Value of i++ is %d\n", i++) ; //this print 5 then increase value of i
    printf("The value of  after ++i is %d\n", ++i); //this increase value of i then print value of i
    printf("Now the value of i is %d\n", i);

    // printf("Value of i++ is %d\n", i--); //this decrease value of i then print value of i
    printf("The value of  after --i is %d\n", --i); //this decrease value of i then print value of i
    printf("Now the value of i is %d\n", i);

    i+=10; //Increament i by 10
    printf("Now the value of i is %d\n", i);
    return 0;
}

//Note +++ opetator doesn't exist