#include <stdio.h>

int main()
{
    int num = 78;

    int *ptr = &num;
    int **ptr1 = &ptr;

    printf("single pointer: %d\n", *ptr);
    printf("double pointer: %d", *ptr1);
}