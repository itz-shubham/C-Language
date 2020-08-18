#include<stdio.h>
void printpattern(int n);

int main() {
    int n = 10;
    printpattern(n);
    return 0;
}

void printpattern(int n) {
    if (n == 1)
    {
        printf("* \n");
        return;
    }
    printpattern(n-1);
    for (int i = 0; i < (n); i++)
        // for (int i = 0; i < (2n-1); i++)
    {
        printf("* ");
    }
    printf("\n");
}