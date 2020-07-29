bool utilityIsBST(node *root, int minValue, int maxValue){
    
    if(root==NULL) return true;

    if(root->data > minValue && root->data < maxValue
        && utilityIsBST(root->left, minValue, root->data)
        && utilityIsBST(root->right,root->data,maxValue)
    ) return true;
    else return false;
}

bool isBST(node *root){
    return utilityIsBST(root, INT_MIN,INT_MAX);
}