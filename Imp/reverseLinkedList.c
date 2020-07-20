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

void reverse(struct Node *p){
   
    if(p->next == NULL){
        head = p;
        return;
    }
    reverse(p->next);
    
    struct Node *q = p->next;
    q->next =p;
    p->next = NULL;
    
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
        printf("1. Insert  2. Reverse 3.Print 4. Exit \n");
        scanf("%d",&choice);
         int value;
        switch(choice){
            case 1 :
                    printf("Enter value to insert.\n");
                    scanf("%d",&value);
                    insert(value);
                    break;
            case 2 :
                    reverse(head);
                    break;
            case 3 :
                    print();
                    break;
            case 4 :
                    exit(0);
        
            default :
                    printf("Oops ! Invalid operation.\n");
        } 
    } 
  
}