#include<stdio.h>
main(){

    int input;

    printf("Enter an integer to get its inverted half pyramid as output:");
    scanf("%d",&input);

    printf("The produced inverted half pyramid is :..");
    printf("\n");

    for(int j=input;j>=1;j--){

        printf("\n");

        for(int i=1;i<=j;i++)
            printf("%d ",j);

    }
}
