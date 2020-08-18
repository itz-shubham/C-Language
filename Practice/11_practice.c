// #include<stdio.h>

// int main() {
//     int a;
//     printf("Enter a value less than 10 to print that number to 10 - ");
//     scanf("%d", &a);

//     while (a<10)
//     {
//         printf("%d\n", a);
//         a++;
//     }

//     return 0;
// }

// print the value of i between 10 and 20

#include<stdio.h>

int main(){
    int i = 0;

    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    
    return 0;
}
