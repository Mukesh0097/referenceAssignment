// int fseek(FILE *stream, long int offset, int whence) for fseek
#include <stdio.h>
void main()
{
    FILE *f;
    f = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("Can't open file or file doesn't exist.");
    }
    rewind(f);
    fseek(f, 0, SEEK_END);
    printf("The size of file : %ld bytes", ftell(f));
}