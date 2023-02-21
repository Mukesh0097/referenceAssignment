#include <stdio.h>

int main()
{
    // create a text file .write contents using fprintf and read from file using fscanf

    FILE *filePointer;
    char str[30];

    filePointer = fopen("random.txt", "w");
    scanf("%[^\n]%*c", str);
    fprintf(filePointer, "%s\n", str);

    fclose(filePointer);

    // int i, n = 2;
    // char str[50];

    // // open file sample.txt in write mode
    // FILE *fptr = fopen("sample.txt", "w");
    // if (fptr == NULL)
    // {
    //     printf("Could not open file");
    //     return 0;
    // }

    // for (i = 0; i < n; i++)
    // {
    //     puts("Enter a name");
    //     scanf("%[^\n]%*c", str);
    //     fprintf(fptr, "%s\n", str);
    // }
    // fclose(fptr);

    return 0;
}