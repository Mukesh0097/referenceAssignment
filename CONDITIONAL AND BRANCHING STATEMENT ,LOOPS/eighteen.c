#include <stdio.h>

int main()
{
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}
