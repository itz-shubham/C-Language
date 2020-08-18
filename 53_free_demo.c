#include<stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int *ptr2;
    ptr = (int *) malloc(500 * sizeof(int));
    for (int i = 0; i < 500; i++)
    {
        ptr2 = (int *) malloc(500000 * sizeof(int));
        printf("Enter the value of %d element: ", i);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    
    return 0;
}