#include<stdio.h>
#include <string.h>

int main() {
    char string1[30];
    char string2[30];
    char c;
    int i = 0;

    printf("Enter the value of string1: ");
    scanf("%s", string1);

    printf("Enter the value of string2 character by character\n");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        string2[i] = c;
        i++; 
    }
    string2[i-1] = '\0';
    

    printf("The value of sting1 is %s\n", string1);
    printf("The value of sting1 is %s\n", string2);
    printf("strcmp for these string returns %d\n", strcmp(string1, string2));

    return 0;
}