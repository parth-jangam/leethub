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
    void traverse(TreeNode* root,int &value){
        if(root==NULL){
            return;
        }
        if(root->left && root->left->left && root->val%2==0){
            
            value+=root->left->left->val;
        }
        if(root->left && root->left->right && root->val%2==0){
            value+=root->left->right->val;
        }
        if(root->right && root->right->left && root->val%2==0){
            value+=root->right->left->val;
        }
        if(root->right && root->right->right && root->val%2==0){
            value+=root->right->right->val;
        }
        traverse(root->left,value);
        traverse(root->right,value);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int value=0;
        traverse(root,value);
        return value;
    }
};