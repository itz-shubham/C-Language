#include<stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main() {

    struct employee e1;
    e1.code = 1;
    e1.salary = 35.20;
    // e1.name = "harsh";  // It wont be work
    strcpy(e1.name, "Harry");

    printf("%s is a employee with code %d and his salary is %.3f", e1.name, e1.code, e1.salary);

    return 0;
}