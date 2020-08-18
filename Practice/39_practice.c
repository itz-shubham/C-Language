#include <stdio.h>

int find(char string[], char c)
{
    char *pointer = string;

    while (*pointer != '\0')
    {
        if (*pointer == c)
        {
            printf("%c present in 'Hello World'\n", c);
            break;
        }
        pointer++;
    }
}

int main()
{
    char string[] = "Hello World";
    char c;
    printf("Enter a char, which present in 'Hello World'.\n");
    scanf("%c", &c);

    // for (int i = 0; i = '\0'; i++)
    // {
    //     if (string[i] == c)
    //     {
    //         printf("%c present in 'Hello World'", c);
    //     }
    //     else
    //     {
    //         printf("%c is not present in 'Hello World'", c);
    //     }

    // }    // I dont kow why its not working

    find(string, c);

    return 0;
}