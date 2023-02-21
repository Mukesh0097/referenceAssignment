#include <stdio.h>

int main()
{
    //      create a text file write contents using  fwrite and read from file  using freadf
    //      size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)

    FILE *fp;
    // char str[] = "This is tutorialspoint.com";
    char buffer[1000];

    fp = fopen("file.txt", "r");
    // fwrite(str, 1, sizeof(str), fp);
    fread(&buffer, sizeof(char), 1000, fp);
    printf("%s\n", buffer);

    fclose(fp);
}