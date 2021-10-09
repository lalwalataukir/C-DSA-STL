/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
private:
    void dfs(TreeNode *node, vector<int> &inorder) {
        if(node == NULL) return; 
        
        dfs(node->left, inorder); 
        inorder.push_back(node->val); 
        dfs(node->right, inorder); 
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        dfs(root, inorder);
        return inorder; 
    }
};

// TC --> O(N) every node is accessed once
// SC --> O(h) h is the max. height of the tree as that many max. recursive calls in function call stack 
