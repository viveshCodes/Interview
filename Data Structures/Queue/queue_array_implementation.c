#include<stdio.h>
#include<stdlib.h>
#define N 5
int Array[N];
int front = -1;
int rear = -1;

void IsEmpty(){
    if(front == -1 && rear == -1){
        printf("Queue is empty");
    }else{
        printf("Queue is not empty.");
    }
}
void Print(){
    if(front == -1 && rear == -1){
        printf("Nothing to print.\n");
        return;
    }
    int i;
    for(i=front; i<=rear;i++){
        printf("%d\n",Array[i]);
    }
}
void Dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
        return;
    }else if(front == rear){
        front = rear = -1;
    } else{
     front = (front + 1) %N;   
    }
    
}
void Enqueue(int value){
    if((rear +1 )%N == front) {
       printf("Queue is full.\n");
       return;
    }else if(front==-1 && rear==-1){
        front = rear =0;
    }else{
        rear= (rear + 1)%N;
    }
    Array[rear]=value;
}
int main(){
    int choice,value;
    
    while(1){
        printf("1. Enque 2.Deque 3.IsEmpty 4. Print 5.Exit\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:     
                    printf("Enter value to enque .\n");
                    scanf("%d",&value);
                    Enqueue(value);
                    break;
            case 2:
                    Dequeue();
                    break;
                    
            case 3:
                    IsEmpty();
                    break;
            case 4:
                    Print();
                    break;
            case 5 :
                    exit(0);
            default:
                    printf("Oops ! Invalid operation.\n");
            
        }
    }
}