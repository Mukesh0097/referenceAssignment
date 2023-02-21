#include <stdio.h>

int main()
{
    int a = 23;
    int b = 45;
    int *ptr1 = &a;
    int *ptr2 = &b;

    if (*ptr1 > *ptr2)
    {
        printf("pointer 1 is greater than pointer 2");
    }
    else
    {
        printf("pointer 2 is greater than pointer 1");
    }
}