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
    int max_sum(int &maxi,TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int a=max(0,max_sum(maxi,root->left));
        int b=max(0,max_sum(maxi,root->right));
        maxi=max(maxi,a+b+root->val);
        return root->val+max(a,b);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int a=max_sum(maxi,root);
        return maxi;
    }
    
};