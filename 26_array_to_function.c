#include<stdio.h>

// void printArray(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1, *(ptr+1));
//     }
    
// }

void printArray(int ptr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[3] = 21;    // This will be changes in arr array of main as well 
}

int main() {
    int arr[] = {4,6,54,321,8,32,45};
    printArray(arr, 7);
    printf("%d", arr[3]);
    return 0;
}