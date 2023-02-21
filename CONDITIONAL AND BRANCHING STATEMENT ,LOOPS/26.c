#include <stdio.h>
int fun()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    // show the use of static variable.
    // Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope.
    printf("%d\n", fun());
    printf("%d\n", fun());
    return 0;
}