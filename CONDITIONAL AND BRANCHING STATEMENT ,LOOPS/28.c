#include <stdio.h>

float areaOfRectangle(float l, float b)
{
    return l * b;
}

float areaOfCircle(float r)
{
    return 3.14 * r * r;
}

int main()
{
    // find area of circle and area of rectangle  using the function return type.
    float radius, length, bridth;
    printf("enter the value of radius: ");
    scanf("%f", &radius);
    printf("enter the value of length: ");
    scanf(" %f", &length);
    printf("enter the value of bridth: ");
    scanf(" %f", &bridth);

    printf("area of circle: %f\n", areaOfCircle(radius));
    printf("area of rectangle: %f", areaOfRectangle(length, bridth));
}