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
    unordered_map<TreeNode*,int>mappe;
    int maxi(TreeNode* root){
        if(root==NULL){
            return mappe[root] = 0;
        }
        if(mappe.find(root)!=mappe.end()){
            return mappe[root];
        }
        int take=root->val;
        if(root->left){
            take+=maxi(root->left->left)+maxi(root->left->right);
        }
        if(root->right){
            take+=maxi(root->right->left)+maxi(root->right->right);
        }
        int not_take=maxi(root->left)+maxi(root->right);
        
        
        return mappe[root]= max(take,not_take);
    }
    int rob(TreeNode* root) {
        
        
        return maxi(root);
    }
};