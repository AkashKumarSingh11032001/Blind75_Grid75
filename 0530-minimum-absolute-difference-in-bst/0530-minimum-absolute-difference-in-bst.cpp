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
    int out = INT_MAX;
    TreeNode *pre;
public:
    void inorder(TreeNode *root){
        if(root == NULL) return;
        
        inorder(root->left);
        if(pre) out = min(out,abs(root->val-pre->val));
        pre = root;
        inorder(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return out;
        
    }
};