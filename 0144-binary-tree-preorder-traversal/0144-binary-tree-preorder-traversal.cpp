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
   void pre_order(vector<int>&ans,TreeNode* root){
        if(root==NULL){
            return ;
        }
        ans.push_back(root->val);
        pre_order(ans,root->left);
        pre_order(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>ans;
       pre_order(ans,root);
        return ans;
        
    }
};