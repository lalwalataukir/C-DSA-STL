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
    void dfs(TreeNode *node, vector<int> &postorder) {
        if(node == NULL) return; 
        
        dfs(node->left, postorder); 
        dfs(node->right, postorder); 
        postorder.push_back(node->val); 
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        dfs(root, postorder);
        return postorder; 
    }
};

// TC --> O(N) every node is accessed once
// SC --> O(h) h is the max. height of the tree as that many max. recursive calls in function call stack 
