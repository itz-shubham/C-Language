#include<stdio.h>

int main() {
    int marks[4];

    printf("Enter 1st student marks: ");
    scanf("%d", &marks[0]);
    printf("Enter 2nd student marks: ");
    scanf("%d", &marks[1]);
    printf("Enter 3rd student marks: ");
    scanf("%d", &marks[2]);
    printf("Enter 4th student marks: ");
    scanf("%d", &marks[3]);

    printf("You have entered %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}