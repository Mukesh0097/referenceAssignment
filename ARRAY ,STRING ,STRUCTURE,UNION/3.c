
#include <stdio.h>

void searchInlinear(int arr[], int num)
{
    int value = 1;
    for (int i = 0; i < 5; i++)
    {
        if (num == arr[i])
        {
            printf("ya ! the number is available in array\n");
            value = 0;
            break;
        }
    }

    if (value)
    {
        printf("number is not available");
    }
}

int main()
{

    // to search an element from an array by linear search method.
    int arr[5] = {78, 56, 12, 45, 2};

    searchInlinear(arr, 45);
    searchInlinear(arr, 40);
}
