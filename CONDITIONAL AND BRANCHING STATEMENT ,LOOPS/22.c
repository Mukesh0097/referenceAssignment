#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    // Write a program in c to perform maths and character library function  using switch case.
    // 1. use math library funtion

    char checkCase;
    printf("enter the charcter between A & D: ");
    scanf(" %c", &checkCase);

    switch (checkCase)
    {
    case 'A':
        printf("%c is lower form of %c\n", tolower(checkCase), checkCase);
        printf("%f is square of typecasting", pow((checkCase + 0), 2));
        break;
    case 'B':
        printf("%c is lower form of %c\n", tolower(checkCase), checkCase);
        printf("%f is square of typecasting", pow((checkCase + 0), 2));
        break;
    case 'C':
        printf("%c is lower form of %c\n", tolower(checkCase), checkCase);
        printf("%f is square of typecasting", pow((checkCase + 0), 2));
        break;
    case 'D':
        printf("%c is lower form of %c\n", tolower(checkCase), checkCase);
        printf("%f is square of typecasting", pow((checkCase + 0), 2));
        break;

    default:
        printf("plz enter in valid range");
        break;
    }
}
