#include<stdio.h>

void encrypt(char *string){
    char *ptr = string;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    
}

void decrypt(char *string){
    char *ptr = string;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}

int main() {
    char string[] = "Hello World";
    encrypt(string);
    printf("\nEncripted string: %s\n", string);
    decrypt(string);
    printf("\nDecripting that encription: %s\n", string);
    return 0;
}