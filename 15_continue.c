#include<stdio.h>

int main(){
    int i = 0, skip = 5;

    while (i<10)
    {
        i++;
        if (i<skip)
        {
            continue;
        }
        else
        {
            printf("Now the value of i is %d\n", i);
        }
        
    }
    
    return 0;
}