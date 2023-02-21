#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    double ans = 0;
    for (int i = 0; n != 0; i++)
    {
        int rem = n & 1;
        ans = (rem * pow(10, i)) + ans;

        n = n >> 1;
    }

    printf("decimal to binary is %lf", ans);
}