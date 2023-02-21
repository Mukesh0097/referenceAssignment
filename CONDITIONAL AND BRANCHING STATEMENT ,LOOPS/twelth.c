#include <stdio.h>

int main()
{
    int number, value = 1;
    printf("enter the value: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            value = 0;
            break;
        }
    }

    if (value)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}