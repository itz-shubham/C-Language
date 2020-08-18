#include <stdio.h>

int occurence(char string[], char c)
{
    char *pointer = string;
    int count = 0;
    while (*pointer != '\0')
    {
        if (*pointer == c)
        {
            count++;
        }
        pointer++;
    }
    return count;
}

int main()
{
    char string[] = "Shubham";
    int count = occurence(string, 'h');
    printf("Occurence = %d", count);
    return 0;
}