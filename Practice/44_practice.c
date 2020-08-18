#include<stdio.h>

int main() {
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("texts.txt", "r");
    fptr2 = fopen("genrated.txt", "w");

    char c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    // If you genrate once more time
    
    // fclose(fptr1);
    // fptr1 = fopen("texts.txt", "r");
    // fprintf(fptr2, "\n\n\n");
    // char a = fgetc(fptr1);
    // while (a != EOF)
    // {
    //     fputc(a, fptr2);
    //     a = fgetc(fptr1);
    // }
    
    
    fclose(fptr1);
    fclose(fptr2);
    printf("It's done!");
    return 0;
}