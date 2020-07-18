#include<stdio.h>
#include<stdlib.h>

void selectionSort(int array[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int imin = i;
        
        int j;
        for(j=i+1;j<n;j++){
            if(array[j]<array[imin]){
                imin = j;
            }
        }
        int temp = array[i];
        array[i] = array[imin];
        array[imin] = temp;
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
    
    selectionSort(array, size);
}