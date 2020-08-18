#include<stdio.h>

int main() {
    int num;
    printf("Enter a number to genrate a table in table.txt file: ");
    scanf("%d", &num);

    FILE *fptr;
    fptr = fopen("table.txt", "w");

    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d x %d = %d\n", num, i, num*i);
    }
    
    fclose(fptr);
    printf("Table of %d is successfully genrated!", num);
    return 0;
}