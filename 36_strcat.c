#include<stdio.h>
#include <string.h>

int main() {
    char string1[30] = "Hello";
    char *string2 = "World";
    strcat(string1, string2);
    printf("Now string1 will be - %s", string1);
    return 0;
}