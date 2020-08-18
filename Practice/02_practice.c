#include<stdio.h>

int main(){
    // int radius = 3;
    // float pi = 3.14;

    // printf("Area of the circle is %f", pi*(radius*radius));
    // return 0;


    // By user input method  
    int radius;
    float pi = 3.14;

    printf("Enter the radius of a circle --> ");
    scanf("%d", &radius);

    printf("Area of the circle is %f", pi*(radius*radius));
    return 0;
}