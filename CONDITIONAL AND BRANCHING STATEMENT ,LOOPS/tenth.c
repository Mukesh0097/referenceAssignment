#include <stdio.h>

int main()
{
    int num;

    printf("enter the number");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        goto forEven;
    }
    else
    {
        goto forOdd;
    }

forEven:
    printf("%d is even", num);
forOdd:
    printf("%d is odd", num);
}