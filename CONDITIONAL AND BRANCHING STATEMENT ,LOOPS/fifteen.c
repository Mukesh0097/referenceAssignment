#include <stdio.h>
#include <math.h>

int main()
{
    //  check Armstrong
    int n, sum = 0, temp;
    printf("enter the value: ");
    scanf("%d", &n);
    temp = n;

    for (int i = 0; n > 0; i++)
    {
        int rem = n % 10;
        sum += pow(rem, 3);
        n = n / 10;
    }

    if (sum == temp)
    {
        printf("number is Armstrong ");
    }
    else
    {
        printf("number is not Armstrong ");
    }
}