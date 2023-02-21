#include <stdio.h>

int sumofElementOfArray(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{

    // sum of 10 natural no using 1-D array
    int arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        int num;
        printf("enter integer number: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("sum of all element of array: %d", sumofElementOfArray(arr));
}