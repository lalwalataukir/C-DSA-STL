void inorder(node) // initially root is passed
{
    if (node == NULL)
        return;

    inorder(node->left);
    inorder(node->right);
    cout << node->data << " ";
    
}

// TC --> O(N) every node is accessed once
// SC --> O(h) h is the max. height of the tree as that many max. recursive calls in function call stack 
