#include<stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee google = {100, 12.4, "Harry"};

    printf("Code is: %d\n", google.code);
    printf("Salary is: %f\n", google.salary);
    printf("Name is: %s\n", google.name);


    // struct employee shubham = {0};

    // printf("Code is: %d\n", shubham.code);
    // printf("Salary is: %f\n", shubham.salary);
    // printf("Name is: %s\n", shubham.name);
    
    return 0;
}