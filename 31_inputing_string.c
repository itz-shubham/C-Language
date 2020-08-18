#include<stdio.h>

int main() {
    char s[10];
    printf("Enter your name: ");
    scanf("%s", s);
    // scanf("%s", &s); // I dont know is it better way or not
    printf("Hey %s!", s);
    return 0;
}

// This program will not takes any spaces for this you use gets()