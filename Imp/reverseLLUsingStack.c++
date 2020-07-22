#include <bits/stdc++.h>
using namespace std;


struct node {
    int data;
    node *next;
};
node *head=NULL;

void reverse(){
    if(head == NULL) return;
    stack<struct node*>S;
    node *current=head;
    
    while(current !=NULL){
        S.push(current);
        current=current->next;
    }
    current=S.top();
    head=current;
    S.pop();
    while(!S.empty()){
        current->next=S.top();
        S.pop();
        current=current->next;
    }
    current->next=NULL;
}
void print(){
    cout<< "Nodes are \n";
    node *current = new node();
    current = head;
    while(current != NULL){
        cout<<current->data <<"\n";
        current= current->next;
    }
}
void insert(){
    cout<<"Value:\n";
    int value;
    cin >> value;
    
    node *new_node = new node();
    
    new_node->data= value;
    new_node->next=head;
    head=new_node;
    
}

int main(){
     
    
     while(1){
            cout << "1. Insert 2.Reverse 3.Print 4.Exit \n";
             int choose;
     cin >>choose;
     switch(choose){
         case 1:
                insert();
                break;
         case 2:
                reverse();
                break;
         case 3: 
                print();
                break;
         case 4 : 
                exit(0);
         default :
                    cout<<"Oops ! \n";
         
     }  
     }

}