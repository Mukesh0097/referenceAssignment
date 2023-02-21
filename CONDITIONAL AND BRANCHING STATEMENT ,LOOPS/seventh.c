#include <stdio.h>

int main()
{
    // a program to print multiplication table of given number

    int i;
    printf("enter the number: ");
    scanf("%d", &i);
    int j = 1;

    while (j <= 10)
    {
        printf("%d * %d = %d \n", i, j, i * j);
        j++;
    }
}