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
    void traverse(TreeNode* root,int r,int c,int h,vector<vector<string>>&ans){
        if(root==NULL){
            return;
        }
        string temp=to_string(root->val);
        ans[r][c]=temp;
        traverse(root->left,r+1,c-pow(2,h-r-1),h,ans);
        traverse(root->right,r+1,c+pow(2,h-r-1),h,ans);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        
        int h=height(root)-1;
        int n=pow(2,h+1)-1;
        vector<vector<string>>ans(h+1,vector<string>(n,""));
        // cout<<h-1<<endl;
        int mid=(n-1)/2;
        traverse(root,0,mid,h,ans);
        return ans;
    }
};