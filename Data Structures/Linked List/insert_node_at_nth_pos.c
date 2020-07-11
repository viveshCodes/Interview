#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void print(){
    struct Node *current;
    current = head;
    printf("The nodes are :\n");
    while(current!= NULL){
        printf("%d \n",current->data);
        current= current->next;
    }
}

void insert(int value, int pos){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;
    
    if(pos == 1){
        new_node->next=head;
        head=new_node;
        
        print();
        return;
    }
    
    int i;
    struct Node *current;
    current = head;
    for(i=1;i<pos-1;i++){
        current=current->next;
    }
    new_node->next = current->next;
    current->next=new_node;
    
    print();
}


int main(){
    int choice;
    
    
    while(1){
        printf("1. Insert  2. Exit \n");
        scanf("%d",&choice);
         int value, pos;
        switch(choice){
            case 1 :
                    printf("Enter value to insert.\n");
                    scanf("%d",&value);
                    printf("Enter position \n");
                    scanf("%d",&pos);
                    
                    insert(value, pos);
                    break;
            case 2 :
                    exit(0);
                    break;
            default :
                    printf("Oops ! Invalid operation.\n");
        } 
    } 
  
}