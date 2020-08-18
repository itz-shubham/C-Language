#include<stdio.h>

int main(){
    
    int principle = 100, rate = 5, years = 1;
    int simpleInterest = (principle * rate * years) / 100;

    printf("Value of Simple Interest is %d", simpleInterest);
    return 0;
}