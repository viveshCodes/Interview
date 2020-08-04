void leftViewUtil(struct Node *root, int level, int *max_level)
{
    // base case
    if (root==NULL)  return;
    
    // If this is the first node of its level
    if (*max_level < level)
    {
        printf("%d ", root->data);
        *max_level = level;
    }
    
    // Recur for left and right subtrees  
    leftViewUtil(root->left, level+1, max_level);
    leftViewUtil(root->right, level+1, max_level);
}

// Function to get the left view
void leftView(struct Node *root)
{
    int max_level = 0;
    
    // calling util function
    leftViewUtil(root, 1, &max_level);
}