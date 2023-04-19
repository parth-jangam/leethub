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
    void traverse(TreeNode* root, bool b, int count,int &max_count){
        if(root==NULL){
            return;
        }
        max_count=max(count,max_count);
        
        if(b){
            traverse(root->left,false,count+1,max_count);
            traverse(root->right,true,1,max_count);    
        }
        else{
            traverse(root->right,true,count+1,max_count);
            traverse(root->left,false,1,max_count);
        }
        
    }
    int longestZigZag(TreeNode* root) {
        int count=0;
        int max_count=0;
        traverse(root,true,count,max_count);
        return max_count;
    }
};