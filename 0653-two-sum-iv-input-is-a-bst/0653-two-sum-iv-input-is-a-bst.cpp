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
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        traversal(inorder,root);
        int j=inorder.size()-1;
        int i=0;
        while(i<j){
            if(inorder[i]+inorder[j]==k){
                return true;
            }
            else{
                if(inorder[i]+inorder[j]<k){
                    i++;
                }
                else{
                    j--;
                }
            }
        }
        return false;
    }
};