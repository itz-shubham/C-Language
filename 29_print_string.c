#include<stdio.h>

int main() {
    // char str[] = {'S', 'h', 'u', 'b', 'h', 'a', 'm', '\0'};
    char str[] = "Shubham";
    char *ptr = str;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}