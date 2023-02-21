#include <stdio.h>

long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    // find factorial of a number using recursion
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    printf("%ld", factorial(n));
}