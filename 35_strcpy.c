#include<stdio.h>
#include <string.h>

int main() {

    char source[] = "Hello";
    char target[30];
    strcpy(target, source);
    printf("Target now contains source which is '%s'", source);

    // char *st = "Hello world!";
    // char st2[30];
    // strcpy(st2, st);
    // printf("Now st2 is %s", st2);

    return 0;
}
