#include <stdio.h>

int main()
{
    //97 - 122 = a-z    ASCII value
    char ch;

    printf("Enter a character in lowercase character\n");
    scanf("%c", &ch);

    if (ch >= 97 &&ch <= 122)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not a lowercase character");
    }


    return 0;
}


// You can check all character's ASCII values / ASCII table : http://www.asciitable.com/