#include<stdio.h>
main(){

    int size;

    /*taking the size of the array as input from user*/
    printf("Enter the size of the array:");
    scanf("%d",&size);

    /*taking all the elements of the array as input from the user*/
    int array[size];

    printf("\nEnter the elements of the array (please refrain from entering duplicate elements):");

    for(int j=0;j<size;j++){

        printf("\nEnter %dth element :",j+1);
        scanf("%d",&array[j]);
       }

    /*outputting the unsorted version of the users created array*/
    printf("\n Now, your created array (unsorted version) is:\n ");


    printf(" {");
    for(int k=0;k<size;k++){

    printf(" %d,",array[k]);

     }
    printf("}");

    /*inputting the element the user wants to find the index number of from the sorted array*/
    int num;

    printf("\nEnter the number you want to find the index of from the elements of your sorted array : ");
    scanf("%d",&num);

    /*outputting the index of the specified number from the unsorted array*/
    int count=0;

    for(int i=0;i<size;i++){

        if(num==array[i]){
            printf("\nThe index number of this element in the unsorted array is: %d",i);
            count++;
            }

        }
        if(count==0) printf("The number %d was not found within the elements of your unsorted array",num);




}

