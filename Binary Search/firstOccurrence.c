#include<stdio.h>
#include<stdlib.h>

int binarySearch(int array[], int n, int key){
  int low, high, mid, result;
  
  low=0;
  high = n-1;
  result = -1;
  
  while(low <=high){
        mid = (low + high) /2;
        
      if(key == array[mid]){
          high = mid-1;
          result = mid;
      } else if (key > array[mid]){
          low = mid + 1;
      }else{
          high = mid -1 ;
      }
  }
  return result;
}
int main(){
    int size,key;
    
    printf("Enter size of array .\n");
    scanf("%d",&size);
    
    int array[size];
    
    printf("Enter the elements.\n");
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    printf("Key to find :\n");
    scanf("%d", &key);
    int result = binarySearch(array, size, key);
    if(result !=-1){
        printf("First occurrence at %d index\n", result);
    }else{
        printf("Key not found.\n");
    }
    
}