#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front, *rear;

int IsEmpty(){
    if(front == NULL && rear == NULL){
        return 1;
    }else{
        return 0;
    }
}
void Print(){
    if(IsEmpty()){
        printf("Nothing to print.\n");
        return;
    }
    struct node *current;
    current = front;
    while(current != NULL){
        printf("%d\n",current ->data);
        current = current->next;
    }
}
void Dequeue(){
    if(IsEmpty()){
        printf("Queue is empty\n");
        return;
    }else if(front == rear){
        front = rear = NULL;
    } else{
     front = front ->next;   
    }
    
}
void Enqueue(int value){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node ->data = value;
    new_node->next = NULL;
    
    if(IsEmpty()){
        front = rear = new_node;
    }    
    rear ->next = new_node;
    rear = new_node;
    
    return;
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
                    if(IsEmpty()){
                        printf("Queue is empty.\n");
                    }else{
                        printf("Queue is not empty.\n");
                    }
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