#include<stdio.h>
main(){

    int input;

    printf("Enter an integer to get its half pyramid as output:");
    scanf("%d",&input);

    printf("The produced half pyramid is :..");
    printf("\n");


    //loop for producing half pyramid
    for(int j=1;j<=input;j++){

        printf("\n");

        for(int i=1;i<=j;i++)
            printf("%d ",j);
    }


    //loop for producing inverted half pyramid with initially 1 number decrement from input
    for(int j=input-1;j>=1;j--){

        printf("\n");

        for(int i=1;i<=j;i++)
            printf("%d ",j);
    }

}

