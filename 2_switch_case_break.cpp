//
// Created by MIS on 15-Nov-22.
//
#include "stdio.h"
int main(){
char myWord;

    printf("Please enter your char:");
    scanf(" %c",&myWord);

    switch (myWord) {
        case 'a':
            printf("Your char is a:");
            break;
        case 'b':
            printf("Your char is b:");
            break;
        case 'c':
            printf("Your char is c:");
            break;
        default:
            printf("Nothing:");
    }


    return 0;
}