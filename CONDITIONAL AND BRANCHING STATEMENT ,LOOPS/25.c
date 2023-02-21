#include <stdio.h>

int x = 5; // global variable
void checkscope()
{
    printf("%d global variable\n", x);
    // printf("%d local variable\n", y);
}
int main()
{

    int y = 10; // local variable
    printf("%d global variable\n", x);
    printf("%d local variable\n", y);
    printf("checking\n");
    checkscope();

    return 0;
}