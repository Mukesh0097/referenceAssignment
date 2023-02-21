#include<stdio.h>

int main(){
    // find largest among three no using nested if statement.
    int num1 , num2, num3;
    
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    printf("enter the third number: ");
    scanf("%d",&num3);

    if(num1 > num2){
        if(num1 >num3){
            printf("first number is greater all amongst");
        }else{
            printf("the third one is greater all amongst");
        }
    }else{
        if(num2 > num3){
            printf("second number is greater all amongst");
        }else{
            printf("the third one is greater all amongst");
        }
    }
}