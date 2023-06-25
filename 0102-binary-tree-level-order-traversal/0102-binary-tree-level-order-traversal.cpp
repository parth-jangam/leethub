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
    void level_oreder(vector<int>&temp,TreeNode* root,int i){
        if(root==NULL){
            return;
        }
        if(i==1){
            temp.push_back(root->val);
            
        }
        level_oreder(temp,root->left,i-1);
        level_oreder(temp,root->right,i-1);
        
    }
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int a=height(root->left);
        int b=height(root->right);
        return 1+max(a,b);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int h=height(root);
        for(int i=1;i<=h;i++){
            vector<int>temp;
            level_oreder(temp,root,i);
            ans.push_back(temp);
        }
        return ans;
    }
};