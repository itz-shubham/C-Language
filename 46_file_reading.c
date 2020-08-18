#include <stdio.h>

int main()
{
    int num;
    int num2;
    FILE *ptr;
    ptr = fopen("num.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The first number in num.txt file is: %d\n", num);
        printf("The second number in num.txt file is: %d\n", num2);
    }
    return 0;
}