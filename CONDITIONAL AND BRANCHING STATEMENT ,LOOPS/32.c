#include <stdio.h>

long int powerofnumber(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }

    return b * powerofnumber(b, p - 1);
}

int main()
{
    int base, power;
    printf("enter the base number: ");
    scanf("%d", &base);
    printf("enter the power number: ");
    scanf("%d", &power);

    printf("%ld", powerofnumber(base, power));
}