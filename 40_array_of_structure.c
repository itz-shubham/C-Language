#include<stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee google[200];

    google[0].code = 1;
    google[0].salary = 10;
    strcpy(google[0].name, "Harry");

    google[1].code = 1;
    google[1].salary = 10;
    strcpy(google[1].name, "Harry");

    google[2].code = 1;
    google[2].salary = 10;
    strcpy(google[2].name, "Harry");

    google[3].code = 1;
    google[3].salary = 10;
    strcpy(google[3].name, "Harry");
    
    return 0;
}