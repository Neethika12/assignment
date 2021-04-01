#include<stdio.h>

void main(){
    int array[50];
    int i,pos,size;

    //Get sie
    printf("Enter size of the array:");
    scanf("%d",&size);

    //Get elements
    printf("Enter the elements of the array:");
    for ( i = 0; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the pos you want to detete the data:");
    scanf("%d",&pos);

    for ( i = pos-1; i < size-1; i++)
    {
        array[i] = array[i+1];
    }


    size--;
    for ( i = 0; i < size; i++)
    {
        printf(" %d \t", array[i]);
    }

    printf("\n");
    
    
    
}