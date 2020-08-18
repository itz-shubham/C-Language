#include<stdio.h>

struct vector {
    int x;
    int y;
};

int main() {

    struct vector v1, v2;
    v1.x = 6;
    v1.y = 8;
    printf("X dimention is %d and y dimention is %d\n", v1.x, v1.y);

    v2.x = 4;
    v2.y = 5;
    printf("X dimention is %d and y dimention is %d\n", v2.x, v2.y);
    
    return 0;
}