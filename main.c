#include <stdio.h>

int main (){

    int array[10];
    int number;

    int i=0;
    for ( i=0 ; i<10 ; i++){
        printf("\nEnter number %d to populate: ",i+1);
        scanf(" %d",&array[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d",&number);

    for ( i=0; number!=array[i] && i<10 ; i++){
    }
    if ( number == array[i] )
        printf("Number %d is in the array",number);
    else
        printf("Number %d is in the array",number);

    return 0;
}