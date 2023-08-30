#include<stdio.h>

/* function for determining the factorial value*/
int fact(int n){
    int j=1;

    if(n<=0)
        return 1;

    else{
       for(int i=1; i<=n; i++){
       j*=i;
            }
          return j;
        }

}
main(){

    int input;

    printf("Enter the number you want to see the factorial value of:");
    scanf("%d",&input);

    printf("\n The value of its factorial is: %d",fact( input));

}


