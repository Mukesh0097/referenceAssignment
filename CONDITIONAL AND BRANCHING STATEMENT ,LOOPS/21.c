#include <stdio.h>

int main()
{
    // A
    // B C
    // D E F
    int n;
    printf("enter the value: ");
    scanf("%d", &n);

    char ch = 65;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
