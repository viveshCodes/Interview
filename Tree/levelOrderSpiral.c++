// Function to find height of the binary tree


int height(struct Node *root)
{
    // base case
    if(root==NULL)
        return 0;

    // height of left subtree
    int l = 1+height(root->left);

    // height of right subtree
    int r=1+height(root->right);
    if(l>r)
        return l;
    else
        return r;

}

void spiral(struct Node *root,int level ,int flag)
{
    // base case
    if(root==NULL)
        return;

    // 1st level
    if(level==1)
        cout<<root->data<<" ";

        // when level is greater than 1
    else if(level>1)
    {
        // once go for left to right
        if(flag)
        {
            spiral(root->left,level-1,flag);
            spiral(root->right,level-1,flag);
        }
            // go from right to left
        else{
            spiral(root->right,level-1,flag);
            spiral(root->left,level-1,flag);
        }
    }
}

void printSpiral(struct Node *root)
{
    // base case
    if(root==NULL)
        return;

    // calculate height of the tree
    int h = height(root);
    bool flag = false;

    // for each levels do the spiral traversal
    for(int i=1;i<=h;i++)
    {
        spiral(root,i,flag);
        flag=!flag;
    }
}