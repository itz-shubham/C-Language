#include<stdio.h>

int main() {
    int i = 12;
    int *ptr = &i;
    int a = 2;
    int *ptr2 = &a;
    printf("The value of ptr is %u\n", ptr);
    printf("The value of ptr2 is %u\n", ptr2);
    printf("The value of i and a is %d and %d\n", i, a);
    ptr++;  // ptr = ptr + 1;
    // ptr--;  // ptr = ptr - 1;
    printf("The value of ptr is %u\n", ptr);
    printf("The value of ptr2 is %u\n", ptr2);
    printf("The value of i and a is %d and %d\n", i, a);

    // // int takes 4 bits and char takes only one bit 

    // char a = 'A';
    // char *ptr = &a;
    // printf("The value of ptr was %u ", ptr);
    // ptr++;
    // printf("but after ptr++ the value of ptr is %u ", ptr);

    return 0;
}