#include<stdio.h>
#include<stdlib.h>

int binarySearch(int array[], int n, int key){
  int low, high, mid, found;
  found = 0;
  low=0;
  high = n-1;
  mid = (low + high) /2;
  
  while(low <=high){
      if(key == array[mid]){
          found = 1;
          return found;
      } else if (key > array[mid]){
          low = mid + 1;
          mid = (high + low )/2;
      }else{
          high = mid -1 ;
          mid = (high + low)/2;
      }
  }
  return found;
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
    
    if(binarySearch(array, size, key)){
        printf("Key found\n");
    }else{
        printf("Key not found.\n");
    }
    
}