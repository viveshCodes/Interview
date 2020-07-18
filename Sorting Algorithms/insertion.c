#include<stdio.h>
#include<stdlib.h>

void insertionSort(int array[], int n){
    int i,hole, value;
    for(i=1;i<n;i++){
        hole = i;
        value = array[i];
        
        while(hole > 0 && array[hole - 1] > value){
            array[hole]= array[hole -1];
            hole = hole -1 ;
        }
        array[hole]= value;
    }
    
    printf("Sorted array : ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int size;
    
    printf("Enter size of array .\n");
    scanf("%d",&size);
    
    int array[size];
    
    printf("Enter the elements.\n");
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    insertionSort(array, size);
}