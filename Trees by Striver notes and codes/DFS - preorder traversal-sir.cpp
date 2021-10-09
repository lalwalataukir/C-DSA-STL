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
    void dfs(TreeNode *node, vector<int> &preorder) {
        if(node == NULL) return; 
        
        preorder.push_back(node->val); 
        dfs(node->left, preorder); 
        dfs(node->right, preorder); 
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        dfs(root, preorder);
        return preorder; 
    }
};

// TC --> O(N) every node is accessed once
// SC --> O(h) h is the max. height of the tree as that many max. recursive calls in function call stack 
