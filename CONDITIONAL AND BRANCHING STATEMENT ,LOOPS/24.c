#include <stdio.h>
void swapofCallofvalue(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;

    printf("value of number-1 %d\n", a);
    printf("value of number-2 %d\n", b);
}
void swapbyreference(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf(" %d", &b);
    printf("value of number-1 %d\n", a);
    printf("value of number-2 %d\n", b);
    printf("after the compilation\n");
    printf("the below done by swapofCallofvalue\n");
    swapofCallofvalue(a, b);
    printf("the below done by swapbyreference\n");
    swapbyreference(&a, &b);
    printf("value of number-1 %d\n", a);
    printf("value of number-2 %d", b);
}
