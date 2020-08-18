// // do while loop
// #include<stdio.h>

// int main() {
//     int i = 0;
//     int n;

//     printf("Enter a a natural number\n");
//     scanf("%d", &n);

//     do
//     {
//         printf("The number is %d\n", ++i);

//         //Or
//         // printf("The number is %d\n", i+1);
//         // i++;
//     } while (i<n);

//     return 0;
// }

// // for loop

#include<stdio.h>

int main(){
    int value;

    printf("Enter a value \n");
    scanf("%d", &value);

    for (int i = 0; i < value; i++)
    {
        printf("The number is %d\n", i+1);
    }
    
    return 0;
}

