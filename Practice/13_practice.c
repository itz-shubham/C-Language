// do while loop
#include<stdio.h>

int main() {
    int i = 0;
    int value;

    printf("Enter a a natural number\n");
    scanf("%d", &value);

    do
    {
        printf("The number is %d\n", value--);

        //Or
        // printf("The number is %d\n", i+1);
        // i++;
    } while (i=value);

    return 0;
}

// // for loop

// #include<stdio.h>

// int main(){
//     int value;

//     printf("Enter a value \n");
//     scanf("%d", &value);

//     for (int i = value; i; i--)
//     {
//         printf("The number is %d\n", i);
//     }
    
//     return 0;
// }

