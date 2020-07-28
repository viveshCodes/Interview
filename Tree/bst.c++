#include<bits/stdc++.h>
using namespace std;

struct bstNode{
    int data;
    bstNode *left;
    bstNode *right;
};

bstNode *root = NULL;

bstNode* getNewNode(int data){
    
    bstNode *new_node = new bstNode();
    
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->data = data;
    
    return new_node;
}

bstNode* FindMin(bstNode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
bstNode* Delete(bstNode *root, int data){
   if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			bstNode *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			bstNode *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			bstNode *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}

int findHeight(bstNode *root){
    if(root == NULL){
        return -1;
    }
    int leftHeight=findHeight(root->left);
    int  rightHeight=findHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}
void findMin(bstNode *root){
    if(root == NULL){
        cout << "The tree is empty.\n";
    }
    bstNode *current = root;
    
    while(current->left!=NULL){
        current = current->left;
    }
    cout << "Min value is " << current->data << endl;
}
void findMax(bstNode *root){
    if(root == NULL){
        cout << "The tree is empty.\n";
    }
    bstNode *current = root;
    
    while(current->right !=NULL){
        current = current->right;
    }
    cout << "Max value is " << current->data << endl;
}
void inorder(bstNode *p)
{
        if(p==NULL)
                return;
        inorder(p->left);
        cout << p->data;
        inorder(p->right);
}
void insertNode(bstNode *p, int data){
    
   	if(root == NULL) { // empty tree
		root = getNewNode(data);
		return;
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= p->data) {
	    if(p->left == NULL){
	        p->left = getNewNode(data);
	        return;
	    }
		insertNode(p->left,data);
	}
	// else, insert in right subtree. 
	else {
	    if(p->right == NULL){
	        p->right = getNewNode(data);
	        return;
	    }
		insertNode(p->right,data);
	}

}
int main(){
    int data;
    
    while(1){
        cout << "1: Insert  2: Inorder Traversal 3: Find min  4: Find max  5:Finf Height 6:Delete 7: Exit \n";
        int choose;
        cin >> choose;
        
        switch(choose){
            case 1:
                    cout << "Enter data to insert in the node.\n";
                     cin >> data;
    
                     insertNode(root, data);
                     break;
            case 2 :
                    inorder(root);
                    break;
            case 3:
                    findMin(root);
                    break;
            case 4 :
                    findMax(root);
                    break;
            case 5:
                    cout << "The height of tree is " <<findHeight(root) << endl;
                    break;
            case 6:
                    int data;
                    cout << "Data to be deleted.\n";
                    cin >> data;
                    root = Delete(root, data);
            case 7:
                    exit(0);
            default:
                    cout << "Oops !";
        }
    }
    
}