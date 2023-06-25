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
      int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int a=height(root->left);
        int b=height(root->right);
        return 1+max(a,b);
    }
    bool isBalanced(TreeNode* root) {
        int h=height(root);
        int a=0,b=0;
        if(root==NULL){
            return true;
        }
        if(root->left){
            a=height(root->left);
        }
        if(root->right){
            b=height(root->right);
        }
        
        if(max(a,b)-min(a,b)>1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};