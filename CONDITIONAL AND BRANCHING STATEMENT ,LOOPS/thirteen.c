#include <stdio.h>

int main()
{
    //  to sum of digit
    int num, sum;
    printf("enter number: ");
    scanf("%d", &num);
    sum = (num * (num + 1)) / 2;

    printf("%d", sum);

    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }

    // printf("%d", sum);
}