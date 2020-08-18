#include<stdio.h>

int main(){
    float celsius;

    printf("Celsius to Fahrenheit Converter:\nEnter a Celsius value --> ");
    scanf("%f", &celsius);

    printf("Fahrenheit value is %f", (celsius * 9/5) + 32);
    return 0;
}