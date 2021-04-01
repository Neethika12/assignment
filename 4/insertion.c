#include<stdio.h>

void insert();

void main(){
    int i,size,pos,num;
    int array[50];

    //Get size
    printf("Enter size of array");
    scanf("%d",&size);

    //Get array
    printf("Elements of the array");
    for( i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    

    //Get pos
    printf("Enter pos of the number");
    scanf("%d",&pos);

    //Get num
    printf("Enter the number");
    scanf("%d",&num);

    insert( array[50],size,pos,num);

    






}

void insert(int array[],int size,int pos,int num){
    int i;
    for ( i = size-1; i >=pos-1; i--)
    {
       array[i+1] = array[i];
    }
    array[pos-1] = num;

    size++;
    for(i = 0; i < size; i++)
    {
        printf("{%d}",array[i]);
    }
    

}
 