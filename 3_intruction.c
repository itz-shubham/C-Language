// --- Type of declaration Intuction --- //

// #include<stdio.h>

// int main(){
//     // // int a = 4; // Type diclaration intruction
//     // int a = 4, b, c;
//     // b = c = a;

//     // printf("The value of a is %d\n", a);
//     // printf("The value of b is %d\n", b);
//     // printf("The value of c is %d\n", c);

//     float a = 1.1;
//     float b = a + 8.9;

//     printf("The value of b is %f\n", b);
//     return 0;
// }

//

//

//

//

//

//

//

//

// --- Arthmetic Intruction --- //

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     // int a = 4;
//     // int b = 6;

//     // // printf("The value of a + b is %d\n", a + b);
//     // // printf("The value of a - b is %d\n", a - b);
//     // // printf("The value of a * b is %d\n", a * b);
//     // // printf("The value of a / b is %d\n", a / b);

//     // int z;
//     // z = a * b; // Its ligal
//     // // a * b = z;  //Ilegal
//     // printf("The value of z is %d\n", z);

//     // printf(" When 5 divided by 2 leaves a reminder of %d\n", 5%2);
//     // printf(" When -5 divided by 2 leaves a reminder of %d\n", -5%2);
//     // printf(" When 5 divided by -2 leaves a reminder of %d\n", 5%-2);

//     // // No operators is assumed to be present
//     // // printf("The value of 4 * 5 is %d\n", (4)(5)); is wrong
//     // printf("The value of 4 * 5 is %d\n", (4)*(5));

//     // There is no operators to perfome exponential in C
//     // printf("The value of 4^5 is %d\n", 4^5); // It will not return 4 to the power 5
//     // printf("The value of 4 to the power 5 is %f\n", pow(4, 5));

//     // printf("The value of 5 + 6 is %d\n", 5 + 6);         //Int and Int returns - Int
//     // printf("The value of 5 + 6.5 is %f\n", 5 + 6.5);     //Int and float returns - float
//     // printf("The value of 5.0 + 6.5 is %f\n", 5.0 + 6.5); //float and float returns - float

//     // printf("The value of 5/2 is %d\n", 5/2); //It will return only 2
//     // printf("The value of 5.0/2 is %f\n", 5.0/2); //And it will return 2.5

//     return 0;
// }

//

//

//

//

//

//

// ---- Operator Precedence ---- //

#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    int z = 4;

    // printf("The value of 3*x - 2*y is %d \n", 3 * x - 2 * y);       
    // It will happen like this
    //Firstly:  *, / and %
    //then: +, -
    //and then: =

    // printf("The value of 3*x - 2*y is %d \n", 3 * (x - 2 * y)); //Bracket can control these calculations

    printf("The value of x * y / Z = %f \n", x * y / z);
    printf("The value of x / y * Z = %f \n", x / y * z);
    // These will foloow left to right associativity

    return 0;
}