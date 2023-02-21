#include <stdio.h>

int main()
{
    // to find Fibonacci series  upto n terms
    int a, b, c, n;
    a = 1;
    b = 1;
    printf("enter the range: ");
    scanf("%d", &n);

    printf("%d ", a);
    printf("%d ", b);

    for (int i = 0; i < n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}