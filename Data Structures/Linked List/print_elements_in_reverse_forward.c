#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void reversePrint(struct Node *pointer){
    if(pointer == NULL){
        return;
    }   
    reversePrint(pointer->next);
    printf("%d \n",pointer->data);
}

void forwardPrint(struct Node *pointer){
    if(pointer==NULL){
        return;
    }
    
    printf("%d \n",pointer->data);
    forwardPrint(pointer->next);
}

void insert(int value){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = head;
    head=new_node;
    
}


int main(){
    int choice;
    
    
    while(1){
        printf("1. Insert  2. Reverse Print 3.Forward Print 4. Exit \n");
        scanf("%d",&choice);
         int value;
        switch(choice){
            case 1 :
                    printf("Enter value to insert.\n");
                    scanf("%d",&value);
                    insert(value);
                    break;
            case 2 :
                    printf("Reverse :\n");
                    reversePrint(head);
                    break;
            case 3 :
                    printf("Forward:\n");
                    forwardPrint(head);
                    break;
            case 4 : 
                    exit(0);
           
            default :
                    printf("Oops ! Invalid operation.\n");
        } 
    } 
  
}