#include<stdio.h>
#include<stdlib.h>

int max(int num1 , int num2){
     return (num1 > num2) ? num1 : num2 ;
}

int maxSubArray(const int* a, int size) {
   
   int current_max = a[0]; 
   int maximum_sum = a[0]; 
   
   int i;
   for (i = 1; i < size; i++) 
   { 
        current_max = max(a[i], current_max + a[i]); 
        maximum_sum = max(maximum_sum, current_max); 
   } 
   return maximum_sum; 
}

int main(){
    int size ;
    scanf("%d", &size);

    int array[size];
    int i;
    for(i = 0 ; i< size ; i++){
        scanf("%d",&array[i]);
    }
    int maximum_sum = maxSubArray(array , size);
    printf("%d" , maximum_sum);

}
