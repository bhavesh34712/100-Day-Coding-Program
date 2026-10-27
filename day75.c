#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully.");

    return 0;
}
