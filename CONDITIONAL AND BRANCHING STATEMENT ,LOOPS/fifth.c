#include <stdio.h>

int main()
{

    // Write a program to take input  of 5 subject . find total and calculate percent. On the
    // basis of percent provide grade like
    float totalget;
    totalget = 0;
    float percent;

    int arr[5] = {};
    for (int i = 0; i < 5; i++)
    {
        printf("enter the subject%d:\n", i + 1);
        scanf("%d", &arr[i]);
        totalget += arr[i];
    }

    printf("%f\n", totalget);

    percent = (totalget / 500) * 100;

    printf("%f\n", percent);

    if (percent >= 80)
    {
        printf("you got Grade A+");
    }
    else if (percent >= 65 && percent < 80)
    {
        printf("you got Grade A");
    }
    else if (percent >= 50 && percent < 65)
    {
        printf("you got Grade B");
    }
    else if (percent >= 42 && percent < 50)
    {
        printf("you got Grade C");
    }
    else
    {
        printf("oops you fail");
    }
}