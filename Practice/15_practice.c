#include<stdio.h>

int main(){
    int i = 0, sum = 0, n = 10;

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }

    do
    {
        sum += i;
        i++;
    } while (i <= n);
    

    printf("The value of sum(1 to 10) is %d", sum);
    
    return 0;
}