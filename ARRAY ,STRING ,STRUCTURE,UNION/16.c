#include <stdio.h>

int sumOftwonum(int *arr)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    // find the sum of an array element using pointer and function

    int arr[5] = {1, 2, 3, 4, 5};

    printf("sum of all element %d", sumOftwonum(arr));//15
}