#include<stdio.h>

int main() {
    int i = 5;
    int *j = &i;    // j will be store the address of i
    int **k = &j;   // We can store address of j in k

    printf("The value of i is %d\n", i);
    printf("The value of j is %d\n", *j);
    printf("The value of k is %d\n", **k);  // All will be same

    printf("The address of i is %d\n", &i);
    printf("The address of j is %d\n", j);  // Both will be same

    printf("The address of j is %d\n", &j);
    printf("The value of j is %d\n", *(&j));
    return 0;
}

