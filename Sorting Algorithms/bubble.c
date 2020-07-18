#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int array[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int j;
        for(j=0;j<n-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1] = temp;
            }
        }
        int temp = array[i];
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
    
    bubbleSort(array, size);
}