#include <stdio.h>

int main()
{
    //  to print sum of odd no between  0 to 10 using continue.
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("sum of odd %d", sum);
}