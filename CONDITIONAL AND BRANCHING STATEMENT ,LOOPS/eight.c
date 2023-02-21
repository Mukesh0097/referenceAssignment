#include <stdio.h>

int main()
{
    //     using switch case if user enter 11 it will have are area of circle and
    // when user enter 22 it will have area of rectangle and when user enter 33 it will give area
    // of square when user enter 44 it will give area of triangle
    int number;

    printf("enter the number: ");
    scanf("%d", &number);

    switch (number)
    {
    case 11:
        printf("you have area of circle");
        break;
    case 22:
        printf("you have area of rectangle");
        break;
    case 33:
        printf("you have area of square");
        break;
    case 44:
        printf("you have area of triangle");
        break;

    default:
        printf("plz enter valid number");
        break;
    }
}