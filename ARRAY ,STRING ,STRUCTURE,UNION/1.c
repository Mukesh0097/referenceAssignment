#include <stdio.h>

void displayElementofArry(int arr[])
{

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    //     take input of 10 element,  store and display it using  one
    // Dimensional array (using function)
    int arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        int num;
        printf("enter integer number: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    displayElementofArry(arr);
}