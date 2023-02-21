#include <stdio.h>

int main()
{
    // perform multiplication of  two matrix
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int brr[3][3] = {{3, 4, 5}, {7, 8, 9}, {10, 4, 6}};
    int multiply[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int k = 0; k < 3; k++)
        {
            int sum = 0;
            for (int j = 0; j < 3; j++)
            {

                int multi = arr[i][k] * brr[j][k];
                sum += multi;
                multiply[i][k] = sum;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }
}