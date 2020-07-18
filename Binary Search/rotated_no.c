#include<stdio.h>
#include<stdlib.h>

int binarySearch(int array[], int n){
  int low, high, mid, next, prev;
  
  low=0;
  high = n-1;
  
  while(low <=high){

            if(array[low] <= array[high]) return low;
            
            mid = (low + high) /2;
            next=(mid + 1) %n;
            prev = (mid-1 +n) %n;
           
           if(array[mid] <= array[prev] && array[mid] <=array[next]){
               return mid;
           }else if(array[mid]<=array[high]){
               high= mid-1;
           }else if(array[mid] >= array[low]){
               low = mid + 1;
           }
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
    
    int number = binarySearch(array, size);
    printf("Array is rotated  %d time(s).\n",number);
   
    
}