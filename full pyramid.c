#include<stdio.h>
main(){

    int input;

    printf("Enter the number of rows to get its pyramid as output:");
    scanf("%d",&input);

    printf("The produced pyramid is :..");
    printf("\n");

    for(int row=1;row<=input;row++){

        for(int column=1;column<=(input-row);column++){

            printf(" ");
        }

        for(int column=1;column<=row;column++){

            printf("%d ",row);

        }

    printf("\n");

    }
}

