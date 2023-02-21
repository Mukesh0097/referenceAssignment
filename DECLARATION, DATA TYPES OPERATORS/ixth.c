#include<stdio.h>

int main(){
//to convert  the temperature centigrade into fahreheit.
    float tempInfahreheit ,centigrade ;

    printf("enter temp in centigrade: ");
    scanf("%f",&centigrade);

    tempInfahreheit = (1.8 * centigrade) + 32;
    printf(" temp in fahreheit: %f",tempInfahreheit);
    


}