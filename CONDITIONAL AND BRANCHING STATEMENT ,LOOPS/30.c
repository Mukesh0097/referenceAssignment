#include <stdio.h>
void findAverageAndSum(float arr[])
{
    float sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
        printf("%f\n", arr[i]);
    }
    float average = sum / 10;
    printf("average of 10 student: %f\n", average);
    printf("sum of 10 student: %f", sum);
}

int main()
{
    //     read 10 numbers from keyboard and find their sum and average.
    float arr[10] = {};

    for (int i = 0; i < 10; i++)
    {
        float num;
        printf("plz enter the number: ");
        scanf("%f", &num);
        arr[i] = num;
    }

    findAverageAndSum(arr);

    return 0;
}