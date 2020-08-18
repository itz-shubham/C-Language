#include<stdio.h>
float force(float mass);

int main(){
    float m;

    printf("Enter the value of mass in kgs: ");
    scanf("%f", &m);

    printf("Total force is %.2f newton", force(m)); // through %.2f we can control the numbers after decimal

    return 0;
}

float force(float mass){
    float result = mass * 9.8;
    return result;
}