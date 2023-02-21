#include <stdio.h>
#include <string.h>

int main()
{
    // perform string manipulation by Using library function
    char ch[] = "HELLO";

    // to convert the uppercase  string into lowercase string
    printf("%s\n", strlwr(ch));
    // to calculate the length of string
    printf("%d", strlen(ch));
}