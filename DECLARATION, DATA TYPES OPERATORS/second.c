#include<stdio.h>

int main(){
    float SI , principleAmount ,rate, time;
    
    printf("enter the amount: ");
    scanf("%f",&principleAmount);
    printf("enter the rate: ");
    scanf(" %f",&rate);
    printf("enter the time: ");
    scanf(" %f",&time);

     SI = (principleAmount*rate*time)/100;
    printf("your simple interest is %f",SI);
}