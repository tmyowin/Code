//
// Created by MIS on 15-Nov-22.
//
#include "stdio.h"
int main(){
    int age;
    printf("Please enter your age:");
    scanf("%d",&age);

    if(age==18){
        printf("Your age is equal to 18:");
    }else if(age>18 && age<20){
        printf("Your age is over 18:");
    }else if(age<18){
        printf("Your age is under 18:");
    }else{
        printf("Your age is %d",age);
    }

    return 0;
}