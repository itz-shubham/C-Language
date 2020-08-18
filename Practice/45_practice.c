#include <stdio.h>

int main()
{
    char name[20];
    float salary;
    FILE *fptr;
    fptr = fopen("Output.txt", "w");
    int key;
    printf("Do you want to create a employee file (y/n): ");
    scanf("%c", &key);

    if (key == 'y')
    {
        int i = 1;
        while (i == 1)
        {
            printf("Enter employee name: ");
            scanf("%s", &name);
            printf("Enter his/her salary: ");
            scanf("%f", &salary);
            fprintf(fptr, "Name: %s\nSalary: %.2f\n\n", name, salary);

            printf("\n");
            printf("Enter '1' to continue and '0' to submit: ");
            scanf("%d", &i);
        }
    }
    else if (key == 'n')
    {
        printf("Okay, as you wish!");
    }
    
    else
    {
        printf("Please type only 'y' or 'n'");
    }
    

    return 0;
}