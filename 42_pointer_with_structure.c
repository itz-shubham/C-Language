#include<stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 100;  // or you can write ptr->code = 100;
    ptr->code = 100;

    printf("Employee code is: %d", e1.code);
    // printf("Employee code is: %d", (*ptr).code);
    // // printf("Employee code is: %d", *ptr);
    
    return 0;
}