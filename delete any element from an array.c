#include<stdio.h>
main(){

    int index, n=7 ;
    int array[]={4,7,3,9,7,8,2};

    /*showing the pre-existing array as output*/
    printf(" The already existing array is:\n ");

    printf(" {");
    for(int k=0;k<n;k++){

    printf(" %d,",array[k]);

     }
    printf("}");


    /*asking the user to input the index of the element they want to delete*/
    printf("\nEnter the index of the element you want to delete (index range is from 0 to 6): \n");
    scanf("%d",&index);

    for(int i=index;i<n;i++){

        array[i]=array[i+1];

        }

    /*outputting the updated array*/
    printf("\nThe updated array after deleting the element of %d number index is :\n ",index);

    printf(" {");
    for(int j=0;j<n-1;j++){

    printf(" %d,",array[j]);

    }
   printf("}");
}
