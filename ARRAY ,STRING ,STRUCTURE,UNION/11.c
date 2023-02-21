#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    printf("enter the string: ");
    scanf("%[^\n]s", ch);

    // check string palindrome or not
    int s = 0;
    int e = strlen(ch);

    int value = 0;

    while (s <= e)
    {
        if (ch[s] != ch[e - 1])
        {
            printf("not palindrome");
            break;
            value = 0;
        }
        s++;
        e--;
        value = 1;
    }

    if (value)
    {
        printf("palindrome");
    }
}