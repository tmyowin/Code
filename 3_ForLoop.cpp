//
// Created by MIS on 15-Nov-22.
//
#include "stdio.h"
int main(){
    int i,j,k,n;

    printf("Please enter your number n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for(i=1;i<=n;i++){
        printf(" * ");
        for(j=1;j<=n-i;j++){
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n");

    for(i=n;i>=1;i--){
        printf(" * ");
        for(j=1;j<=n-i;j++){
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}

