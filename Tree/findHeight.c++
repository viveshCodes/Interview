int findHeight(node *root){
    if (root == NUll)
    {
        return -1;
    }

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    return max(leftHeight, righHeight) + 1;
    
}