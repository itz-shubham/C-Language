#include<stdio.h>

int stringLength(char *string){
    char *pointer = string;
    int i = 0;
    while (*pointer != '\0')
    {
        pointer++;
        i++;
    }
    return i;
}

int main() {
    char string[] = "This is a string";
    int length = stringLength(string);
    printf("Total number of character = %d", length);
    
    return 0;
}