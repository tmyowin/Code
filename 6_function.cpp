//
// Created by MIS on 21-Nov-22.
//
#include "stdio.h"

int kMyo(int first, int second);

int main(){
    int a=10;
    int b=10;

    printf("%d",kMyo(a, b));

    return 0;
}

int kMyo(int first, int second){

    printf("This is my function:\n");
    int multipleValue=first*second;

    return multipleValue;
}