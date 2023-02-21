#include <stdio.h>

int main()
{
    // A
    // A B
    // A B C

    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char ch = 65;
        for (int j = 1; j <= i; j++)
        {

            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
