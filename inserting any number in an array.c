#include<stdio.h>
main(){

    int  insert, index, n=7 ;
    int array[]={4,7,3,9,7,8,2};

    /*showing the pre-existing array as output*/
    printf(" The already existing array is:\n ");

    printf(" {");
    for(int k=0;k<n;k++){

    printf(" %d,",array[k]);

     }
    printf("}");

    /*asking the user to input number they want to insert and the index they want to insert it in*/
    printf("\nEnter the number you want to insert and the index of the space you want to insert it in (index range is from 0 to 6): \n");
    scanf("%d%d",&insert,&index);

    /*code for inserting the number in the specified index */
    for(int i=n;i>=index;i--){

        array[i+1]=array[i];

    }
    array[index]=insert;

    /*outputting the updated array*/
    printf("\nThe updated array is :\n ");

    printf(" {");
    for(int j=0;j<n+1;j++){

    printf(" %d,",array[j]);

    }
   printf("}");
}

