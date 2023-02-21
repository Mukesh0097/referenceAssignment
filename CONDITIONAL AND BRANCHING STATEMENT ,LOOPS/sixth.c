#include <stdio.h>

int main()
{
    //     to read any Month Number in integer and display Month name in
    // the word.(using switch case)

    int month;

    printf("enter the number of month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("january");
        break;
    case 2:
        printf("february");
        break;
    case 3:
        printf("march");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("may");
        break;
    case 6:
        printf("june");
        break;
    case 7:
        printf("july");
        break;
    case 8:
        printf("august");
        break;
    case 9:
        printf("septemeber");
        break;
    case 10:
        printf("october");
        break;
    case 11:
        printf("november");
        break;
    case 12:
        printf("december");
        break;
    default:
        printf("please enter valid number");
    }
}