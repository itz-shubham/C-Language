// Write a program to find greatest number in given four numbers

#include<stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("Enter your 1st number - ");
    scanf("%d", &num1);

    printf("Enter your 2nd number - ");
    scanf("%d", &num2);

    printf("Enter your 3rd number - ");
    scanf("%d", &num3);

    printf("Enter your 4th number - ");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("%d is greater than any number ", num1);
    }
    
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("%d is greater than any number ", num2);
    }
    
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("%d is greater than any number ", num3);
    }
    
    else if (num4 > num1 && num4 > num2 && num4 > num3)
    {
        printf("%d is greater than any number ", num4);
    }
    else
    {
        printf("Two or more than two numbers are same");
    }
    

    return 0;
}