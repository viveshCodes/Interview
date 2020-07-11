#include<stdlib.h>
#include<stdio.h>
#define MAX_SIZE 10

int top = -1;

void print(int Array[]){
    if(top == -1){
        printf("Nothing to print");
        return;
    }
    int i = 0;
    while(i <=top){
        printf("%d \n",Array[i]);
        i++;
    }
}
void pop(){
    if(top == -1){
        printf("Nothing to pop \n");
        return;
    }
    top--;
}
void push(int Array[],int value){
    if(top == MAX_SIZE-1){
        printf("Stack overflow \n");
        return;
    }
    Array[++top]=value;
}
int main(){
    int Array[MAX_SIZE];
    
    while(1){
        printf("1. Push 2.Pop 3.Print 4. Exit");
        int choice,value;
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                    printf("Value to push :\n");
                    scanf("%d",&value);
                    push(Array, value);
                    break;
            case 2 : 
                    pop();
                    break;
            case 3 :
                    print(Array);
                    break;
              
            case 4 :
                    exit(0);
            default :
                    printf("Oops ! Invalid operation.");
            
        }
    }
}
