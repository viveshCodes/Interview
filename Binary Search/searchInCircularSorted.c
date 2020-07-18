#include<stdio.h>
#include<stdlib.h>

int circularBinarySearch(int array[], int n, int key){
  int low, high, mid, next, prev;
  
  low=0;
  high = n-1;
  
    while(low <=high){
         mid = (low + high)/2;
         
        if(key == array[mid]) return 1;
        
        if(array[mid] <= array[high]){
                if(key > array[mid] && key <=array[high]){
                    low = mid + 1;
                }else{
                    high = mid -1;
                }
        }else{
                if(key >= array[low] && key < array[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
        }
        
    }
   
    return 0;

}
int main(){
    int size, key;
    
    printf("Enter size of array .\n");
    scanf("%d",&size);
    
    int array[size];
    
    printf("Enter the elements.\n");
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    printf("Enter key.\n");
    scanf("%d",&key);
    
    if(circularBinarySearch(array,size, key)){
        printf("Key found.\n");
    }else{
        printf("Key not found.\n");
    }
   
    
}