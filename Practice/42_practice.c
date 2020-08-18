#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;

void display(date d)
{
    printf("%d.%d.%d", d.date, d.month, d.year);
}

int dateCmp(date d1, date d2)
{
    // making decision on the basis of year comparision
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    // making decision on the basis of month comparision
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    // making decision on the basis of date comparision
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}

int main()
{
    date d1 = {16, 8, 2021};
    date d2 = {16, 5, 2022};
    printf("Dates: ");
    display(d1);
    printf(" and ");
    display(d2);
    printf("\n");

    int a = dateCmp(d1, d2);

    if (a == -1)
    {
        printf("Result: ");
        display(d1);
        printf(" is greater than ");
        display(d2);
    }
    else if (a == 1)
    {
        printf("Result: ");
        display(d2);
        printf(" is greater than ");
        display(d1);
    }
    else
    {
        printf("Result: Both are same");
    }
    

    return 0;
}