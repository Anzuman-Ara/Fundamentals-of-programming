#include<stdio.h>
main(){

    int input;

    printf("Enter an integer to get its half pyramid as output:");
    scanf("%d",&input);

    printf("The produced half pyramid is :..");
    printf("\n");

    for(int j=1;j<=input;j++){

        printf("\n");

        for(int i=1;i<=j;i++)
            printf("%d ",j);

    }
}
