#include <stdio.h>

int main()
{
    // copy one String into another String without using library function
    char ch1[] = "hello ji";
    char ch2[] = "";
    for (int i = 0; ch1[i] != '\0'; i++)
    {
        ch2[i] = ch1[i];
    }
   
    for (int i = 0; ch2[i] != '\0'; i++)
    {
        printf("%c", ch2[i]);
    }
}