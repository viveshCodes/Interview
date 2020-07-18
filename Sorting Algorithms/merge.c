#include<stdio.h>
#include<stdlib.h>

void merge(int A[], int L[], int nL, int R[], int nR){
    int i,j,k;
    i=j=k=0;
    while(i<nL && j <nR){
        if(L[i] < R[j]) A[k++]=L[i++];
        else A[k++] = R[j++];
    }
    while(i<nL) A[k++] = L[i++];
    while(j<nR) A[k++] = R[j++];
}
void mergeSort(int array[], int n){
  
    int i;


    int *L, *R;
    int mid = n/2;
    if(n<2) return;

    L = (int *)malloc(sizeof(int) * mid);
    R = (int *)malloc(sizeof(int) * (n-mid));

    for(i=0;i<mid;i++){
        L[i] = array[i];
    }

    for(i=mid;i<n;i++){
        R[i-mid] = array[i];
    }

    mergeSort(L,mid);
    mergeSort(R,n-mid);

    merge(array,L,mid,R,n-mid);

    free(L);
    free(R);
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
    
    mergeSort(array, size);
    
    printf("Sorted array : ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}