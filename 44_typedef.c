#include<stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
} emp;

// void show(struct employee emp){
//     printf("The code of employee is: %d\n", emp.code);
//     printf("The salary of employee is: %f\n", emp.salary);
//     printf("The name of employee is: %s\n", emp.name);
// }

// We can create a function like this

void show(emp employee){
    printf("The code of employee is: %d\n", employee.code);
    printf("The salary of employee is: %f\n", employee.salary);
    printf("The name of employee is: %s\n", employee.name);
}

int main() {
    emp e1;
    emp *ptr;

    ptr = &e1;
    ptr->code = 100;
    ptr->salary = 100.22;
    strcpy(ptr->name, "Shubham");

    show(e1);
    
    return 0;
}