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
public:
    void traversal(vector<int>&inorder,TreeNode* root){
        if(root==NULL){
            return;
        }
        traversal(inorder,root->left);
        inorder.push_back(root->val);
        traversal(inorder,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>inorder;
        traversal(inorder,root);
        return inorder[k-1];
    }
};