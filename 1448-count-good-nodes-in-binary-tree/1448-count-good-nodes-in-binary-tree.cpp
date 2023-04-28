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
    void traverse(TreeNode* root, int &count,int maxi){
        if(root==NULL){
            return ;
        }
        if(maxi<=root->val){
            count++;
        }
        traverse(root->left,count, max(maxi,root->val));
        traverse(root->right,count, max(maxi,root->val));
        
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        if(root==NULL){
            return 0;
        }
        int maxi=root->val;
        traverse(root,count,maxi);
        return count;
    }
};