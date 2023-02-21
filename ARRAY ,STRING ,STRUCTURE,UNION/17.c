#include <stdio.h>

int main()
{
    int num1, num2;
    num1 = 45;
    num2 = 50;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("sum of two no using pointer : %d", (*ptr1 + *ptr2));
}