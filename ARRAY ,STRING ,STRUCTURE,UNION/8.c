#include <stdio.h>

int main()
{

    char stringAry[100] = "my name is mukesh";
    int length = 0;

    for (int i = 0; stringAry[i] != '\0'; i++)
    {
        if (stringAry[i] != ' ')
        {
            length++;
        }
    }

    printf("%d", length);
}