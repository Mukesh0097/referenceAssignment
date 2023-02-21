#include <stdio.h>

float findVolume(float l, float b, float h)
{
    return l * b * w;
}

int main()
{
    float length, bridth, height;
    printf("enter the value of length: ");
    scanf("%f", &length);
    printf("enter the value of bridth: ");
    scanf(" %f", &bridth);
    printf("enter the value of heigth: ");
    scanf(" %f", &height);

    printf("volume of object: %f", findVolume(length, bridth, width));
}