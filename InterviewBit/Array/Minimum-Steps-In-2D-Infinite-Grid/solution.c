#include<stdio.h>
#include<stdlib.h>
int maximum(int dx , int dy){
    return (dx > dy ? dx : dy) ;
}
int shortestPath(int x1 , int y1 , int x2 , int y2){
        int dHorizontal = abs(x2- x1);
        int dVertical = abs(y2-y1);
        return maximum(dHorizontal , dVertical);
}

int numberOfSteps(int A[] , int B[] , int size){
    int stepCount = 0;
    int i;
    for(i = 0 ; i < size -1 ; i++){
        stepCount += shortestPath(A[i] ,B[i] , A[i+1] ,B[i+1]);
    }
    return stepCount;
    
}
int main(){
    // Array A
    int size ;
    scanf("%d" ,&size);
    int A[size] , i;
    for( i = 0 ; i<size ; i++){
        scanf("%d" ,&A[i]);
    }
    // Array B
    scanf("%d" ,&size);
    int B[size];
    for( i = 0 ; i<size ; i++){
        scanf("%d" ,&B[i]);
    }
    
    printf("%d" ,numberOfSteps(A , B , size ));
}