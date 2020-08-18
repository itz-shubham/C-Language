// #include<stdio.h>

// int main(){
//     // int a; b; //invalid
//     int a; int b; //valid

//     int v = 3^3; //It is valid but it doesn't mean it is 3 to the power 3

//     // char dt = '30 December 2020';
//     // Char containtains only one character like this
//     char dt = '3';
//     return 0;
// }

// Write a program to determine wherther a number is divisible by 97 or not

// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter a number which is divisible by 97 \n");
//     scanf("%d", &a);
//     printf("If you get 0 then your number is divisible by 97\n");
//     printf("--> %d", a%97);

//     return 0;
// }

// Q: Write step by step evaluation of 3*x/y-z+k
// where x=2, y=3, z=3 and k=1

#include <stdio.h>

int main(){

    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;

    printf("3*x/y-z+k where x=2, y=3, z=3 and k=1 \n");
    printf("= 3 * x / y - z + k \n");
    printf("= 3 * 2 / 3 - 3 + 1 \n");
    printf("= 6 / 3 - 3 + 1 \n");
    printf("= 2 - 3 + 1 \n");
    printf("= -1 + 1 \n");
    printf("= 0 \n");

    return 0;
}

// 3.0 + 1 will be return a floating point number