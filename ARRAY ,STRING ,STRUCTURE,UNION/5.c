#include <stdio.h>

int main()
{

    // perform addition of  two matrix
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int brr[3][3] = {{3, 4, 5}, {7, 8, 9}, {10, 4, 6}};
    int sum[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}