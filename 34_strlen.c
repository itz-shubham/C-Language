#include<stdio.h>
#include <string.h>

int main() {
    char *st = "Hello world!";
    int length = strlen(st);
    printf("Total lenght of st is %d", length);
    return 0;
}

// strlen is a function which counts length of a string excluding the null charachter