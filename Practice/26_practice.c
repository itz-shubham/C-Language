#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

int main() {
    int x, y, sum;
    float avg;
    x = 3;
    y = 6;

    sumAndAvg(x, y, &sum, &avg);
    printf("sum of x and y is %d\n", sum);
    printf("total average of x and y is %f\n", avg);

    return 0;
}