#include<stdio.h>

int main(){
    int a = 10;
    
    if (a = 11) {
        printf("I am 11");
    }
    else {
        printf("I am not 11");
    }
    return 0;
}       
// This will return "I am 11" because of line 6 assigning 11 value in "a" rather than checking a value. It should be (a == 11)