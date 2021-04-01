#include <stdio.h>

void main(){
    int array[50];
    int i,size,num;
    
    //Get size
    printf("Enter size of array:");
    scanf("%d",&size);
    
    //Get elements
    printf("Enter elements if array:");
    for( i = 0; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Enter the number you want to delete");
    scanf("%d",&num);

    for ( i = 0; i < size; i++)
    {
        if (num==array[i])
        {
            array[i]==array[size-1];
        }
        
    }
    
    
    
  
    
    size--;
    
    for( i = 0; i< size; i++)
    {
        printf(" %d \t " , array[i]);
    }
    
    printf("\n");
    
    
    
}


    


