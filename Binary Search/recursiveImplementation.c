#include<stdio.h>
#include<stdlib.h>

int binarySearch(int array[], int low, int high, int key){
  int mid = (high + low)/2;
  if(low > high) return -1;
  
  if(key == array[mid]){
      return mid;
  }else if (key > array[mid]){
      binarySearch(array, mid+1, high, key );
  }else{
      binarySearch(array,low, mid-1, key);
  }


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
    
    if(binarySearch(array, 0, size -1, key) !=-1){
        printf("Key found\n");
    }else{
        printf("Key not found.\n");
    }
    
}