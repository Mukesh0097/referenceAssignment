#include <stdio.h>

int main()
{
    //         *
    //     *       *
    // *       *      *

    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int k = n;

    for (int i = 1; i <= n; i++)
    {
        int l = k;
        while (l)
        {
            printf(" ");
            l--;
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        k--;
    }
}
