#include<stdio.h>
#include<stdlib.h>

int binarySearch(int array[], int n, int key,int searchFirst){
  int low, high, mid, result;
  
  low=0;
  high = n-1;
  result = -1;
  
  while(low <=high){
        mid = (low + high) /2;
        
      if(key == array[mid]){
          result = mid;
          if(searchFirst){
              high = mid-1;
          }
          else{
              low = mid + 1;
          }
        
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
    int first = binarySearch(array, size, key, 1);
    if(first ==-1){
        printf("No of occurrence of %d is %d\n", key,0);
    }else{
        int last = binarySearch(array, size, key, 0);
        printf("No of occurrence of %d is %d",key, (last-first+1));
    }
    
}