//
// Created by MIS on 15-Nov-22.
//
#include "stdio.h"
int main(){
    int i=0;

    int w=50;

    while (i<w){
        i++;
        printf("%d : This is diploma in computing level_1:\n",i);
        if(i==20) {
            printf("We found 20:\n");
            i=50;
        }
    }

    return 0;
}