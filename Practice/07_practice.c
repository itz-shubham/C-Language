//Write a program to find out whether a student is pass or fail.
//If it required total of 40% and at least 33% in each subject to pass.
//Assume 3 subjects and take marks as an input from the user.

#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Ente your Physics marks\n");
    scanf("%d", &physics);

    printf("Ente your Chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Ente your Maths marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if (total > 40)
    {
        if (physics < 33)
        {
            printf("Your total persentage is %f but you failed in Physics", total);

            if (chemistry < 33)
            {
                printf(" and also in Chemistry");
            }
            else if (maths < 33)
            {
                printf(" and also in Maths");
            }
        }
        else if (chemistry < 33)
        {
            printf("Your total persentage is %f but you failed in Chemistry", total);

            if (maths < 33)
            {
                printf(" and also in Maths");
            }
        }
        else if (maths < 33)
        {
            printf("Your total persentage is %f but you failed in Maths", total);
        }
        else
        {
            printf("Congratulation! Your total persentage is %f and you passed", total);
        }
    }
    else
    {
        printf("Sorry, You are failed!");
    }

    return 0;
}