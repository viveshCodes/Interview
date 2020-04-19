#include<stdio.h>
#include<stdlib.h>
int* plusOne(int number[], int size, int *len1)
{
    *len1 = size;
    int* result = (int*)calloc(size+1, sizeof(int));
    int carry = 1;
    int i = size-1;
    for (i=size-1; i >= 0; i--)
    {
        int sum = number[i]+carry;
        carry = sum/10;
        result[i] = result[i]+sum%10;
    }
    
    
    if(carry == 1)
    {
        *len1 = size + 1;
        for (i = size; i > 0; i--)
        {
            result[i] = result[i-1];
        }
        result[0] = carry;
    }
  
    
    return result;
}   
int main(){
    int size , length;
    scanf("%d",&size);
    length=size;
    
    int number[size];
    int i ;
    for(i = 0 ; i< size ; i++){
        scanf("%d",&number[i]);
    }
    
    int *afterPlusOne = plusOne(number , size , &length );
    for(int i = 0; i < length ; i++){
        printf("%d ", afterPlusOne[i]);
    } 
}