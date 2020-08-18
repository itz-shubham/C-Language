#include <stdio.h>

int main()
{
    int arr[] = {54, -87, 3, 12, 35, 64, 5, -31, -156, 1, 23, 13, -1, 23, -54};
    int n = 15;
    int positiveInts = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveInts++;
        }
    }
    printf("There are total %d positive numbers in array", positiveInts);
    return 0;
}