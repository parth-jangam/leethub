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
    void traversal(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return ;
        }
        traversal(root->left,ans);
        ans.push_back(root->val);
        traversal(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        traversal(root,ans);
        
        int min_dif=INT_MAX;
        int i=1;
        while(i<ans.size()){
            min_dif=min(ans[i]-ans[i-1],min_dif);
            i++;
        }
        return min_dif;
    }
};