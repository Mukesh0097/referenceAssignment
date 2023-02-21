#include <stdio.h>

void swaptheElement(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void sortTheElementOfArray(int *arr)
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            if (arr[j] < arr[i])
            {
                swaptheElement(&arr[i], &arr[j]);
            }
        }
    }
}

int main()
{

    // to sort element of array in ascending order
    int arr[5] = {78, 56, 12, 45, 2};

    sortTheElementOfArray(arr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}