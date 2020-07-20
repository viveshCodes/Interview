#include<stdio.h>
#include<stdlib.h>

void PrintSpiral(int m, int n,int A[][n]){
    int T,B,L,R,i;
    T=0; B=m-1; L=0; R=n-1;
    int dir=0;
    
    while(L<=R && T<=B){
        if(dir==0){
            for(i=L;i<=R;i++){
                printf("%d\t",A[T][i]);
                
            }
           T++;
        }
        else if(dir ==1){
            for(i=T;i<=B;i++){
                printf("%d \t",A[i][R]);
            }
            R--;
        }
        else if(dir ==2){
            for(i=R;i>=L;i--){
                printf("%d \t",A[B][i]);
            }
            B--;
        }else if(dir == 3){
            for(i=B;i>=T;i--){
                printf("%d\t",A[i][L]);
            }
            L++;
        }
        dir=(dir+1)%4;
    }
}

int main(){
    int m,n;
    
    printf("Enter the value of m and n respectively.\n");
    scanf("%d",&m);
    scanf("%d",&n);
    
    int A[m][n];
    
    int i,j;
    for(i=0;i<m;i++){
        printf("Enter elements for row %d \n",i);
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    PrintSpiral(m,n,A);
}