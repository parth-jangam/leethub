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
    void paths(vector<vector<int>>&ans,TreeNode* root,vector<int>&temp){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            temp.push_back(root->val);
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        temp.push_back(root->val);
        paths(ans,root->left,temp);
        paths(ans,root->right,temp);
        temp.pop_back();
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<string >an;
        paths(ans,root,temp);
        for(int i=0;i<ans.size();i++){
            string p="";
            for(int j=0;j<ans[i].size()-1;j++){
                // cout<<ans[i][j]<<" ";
                p+=to_string(ans[i][j]);
                p+="->";
            }
            p+=to_string(ans[i][ans[i].size()-1]);
            an.push_back(p);
            // cout<<endl;
        }
        return an;
    }
};