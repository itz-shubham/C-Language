// #include <stdio.h>

// int main()
// {
//     char ptr[] = "Hello world!";
//     ptr = "Hello Shubham";
//     printf("%s", ptr);  // This will gonna change ptr value

//     return 0;
// }

#include <stdio.h>

int main()
{
    char *ptr = "Hello world!";

    ptr = "Hello Shubham";
    printf("%s", ptr);

    return 0;
}