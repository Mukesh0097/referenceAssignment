#include <stdio.h>

int main()
{
    // Transpose of a matrix.
    int arr[2][2] = {{1, 2}, {3, 4}};
    int brr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            brr[i][j] = arr[j][i];
            printf("%d ", brr[i][j]);
        }

        printf("\n");
    }
}