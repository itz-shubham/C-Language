#include<stdio.h>

void printTable(int *mulTable, int n, int num){
    printf("The multiplication table of %d\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i+1, mulTable[i]);
    }
    printf("*****************************\n\n");    
}

int main() {
    int mulTable[3][10];
    printTable(mulTable[0], 10, 2);
    printTable(mulTable[1], 10, 7);
    printTable(mulTable[2], 10, 9);
    
    return 0;
}