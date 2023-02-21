#include<stdio.h>

int main(){
    //check whether enter year is leap or not(if ...else) 
    int checkYearleap ;

    printf("enter the year: ");
    scanf("%d",&checkYearleap);

    if(checkYearleap%4 == 0){
        if(checkYearleap%100 == 0){
            if(checkYearleap%400 == 0){
                printf("year is leap year");
            }else{
                printf("year is not leap year");
            }

        }else{
            printf("year is leap year");
        }
    }else{
        printf("year is not leap year");
    }
}