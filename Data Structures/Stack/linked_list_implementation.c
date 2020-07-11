#include<stdlib.h>
#include<stdio.h>


struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;

void print(){
    if(top == NULL){
        printf("Nothing to print");
        return;
    }
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current = top;
    while(current !=NULL){
        printf("%d \n",current->data);
    
        current= current->next;
    };
}

void pop(){
    if(top == NULL){
        printf("Nothing to pop \n");
        return;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = top;
    top=top->next;
    free(temp);
}
void push(int value){
   struct node *new_node = (struct node *)malloc(sizeof(struct node));
   
   new_node->data = value;
   new_node->next = top;
   top=new_node;
}
int main(){
   
    
    while(1){
        printf("1. Push 2.Pop 3.Print 4. Exit");
        int choice,value;
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                    printf("Value to push :\n");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2 : 
                    pop();
                    break;
            case 3 :
                    print();
                    break;
              
            case 4 :
                    exit(0);
            default :
                    printf("Oops ! Invalid operation.");
            
        }
    }
}
