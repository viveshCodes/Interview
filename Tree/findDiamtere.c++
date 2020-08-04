int go(Node* n, int* dia) {
    if (!n) return 0;

    int l = go(n->left, dia);  // height of left subtree
    int r = go(n->right, dia); // height of right subtree

    if (l + r + 1 > *dia) *dia = l + r + 1; // l+r+1 is a possible max dia

    return 1 + max(l, r); // returning height of subtree
}

int diameter(Node* node) {
    int dia = 0;
    go(node, &dia);
    return dia;
}



/* Function to get diameter of a binary tree */
int diameter(struct node * tree) 
{ 
   /* base case where tree is empty */
   if (tree == NULL) 
     return 0; 
  
  /* get the height of left and right sub-trees */
  int lheight = height(tree->left); 
  int rheight = height(tree->right); 
  
  /* get the diameter of left and right sub-trees */
  int ldiameter = diameter(tree->left); 
  int rdiameter = diameter(tree->right); 
  
  /* Return max of following three 
   1) Diameter of left subtree 
   2) Diameter of right subtree 
   3) Height of left subtree + height of right subtree + 1 */
  return max(lheight + rheight + 1, max(ldiameter, rdiameter)); 
}  
  
/* UTILITY FUNCTIONS TO TEST diameter() FUNCTION */
  
/*  The function Compute the "height" of a tree. Height is the  
    number f nodes along the longest path from the root node  
    down to the farthest leaf node.*/
int height(struct node* node) 
{ 
   /* base case tree is empty */ 
   if(node == NULL) 
       return 0; 
  
   /* If tree is not empty then height = 1 + max of left  
      height and right heights */    
   return 1 + max(height(node->left), height(node->right)); 
}  
  