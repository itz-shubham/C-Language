#include<stdio.h>

int main(){
    for (int i = 0; i < 100; i++)
    {
        if (i == 18)
        {
            break;
        }
        printf("The value of i is %d\n", i);
    }
    
    return 0;
}