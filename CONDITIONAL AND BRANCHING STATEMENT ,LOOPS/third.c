#include<stdio.h>

int  checkEvenOdd(int num){

    if(num%2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    // even and odd no by using if else statement
    int number ;
    printf("enter the integer number: ");
    scanf("%d",&number);
    if(checkEvenOdd){
        printf("number is even");
    }else{
        printf("number is odd");
    }
}