#include <stdio.h>
enum days
{
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
int main()
{
    enum days d;

    for (d = sunday; d <= saturday; d++)
    {
        printf("%d ", d);
    }
}