#include<stdio.h>
#include <string.h>

int main() {
    char string1[30] = "Hello";
    char *string2 = "Hellow";
    int val = strcmp(string1, string2);

    printf("Now the val is %d", val);   // If it will print 0 then both string is same
    return 0;
}

// It will check mismatch character and then compare thier ascii value and then return -1 or 1