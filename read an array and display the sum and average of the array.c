#include<stdio.h>
main(){

    int size;
    float ave, sum=0;

    /*taking the size of the array as input from user*/
    printf("Enter the size of the array:");
    scanf("%d",&size);

    /*taking all the elements of the array as input from the user*/
    int array[size];

    for(int j=0;j<size;j++){

        printf("\nEnter the %dth element of the array:",j+1);
        scanf("%d",&array[j]);
       }

    /*formula of sum for all the elements of the array*/
    for(int i=0;i<size;i++){

        sum+=array[i];
    }

    /*formula of average for all the elements of the array*/
    ave= sum/size;

    /*showing the sum  and average of the all elements of the array as output*/
    printf("\nThe sum  and average of the all elements of the array are %.2f and %.2f ,respectively.",sum,ave);

}
