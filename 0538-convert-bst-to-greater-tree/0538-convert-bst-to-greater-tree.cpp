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
    // int sum=0;
    // int i=0;
    //  void inorderr(TreeNode* root,vector<int>&ans){
    //     if(root==NULL){
    //         return;
    //     }
    //     inorder(root->left,ans);
    //     // sum+=root->val;
    //     // ans.push_back(root->val);
    //      root->val=ans[i];
    //      i++;
    //     inorder(root->right,ans);
    // }
    void inorder(TreeNode* root,vector<int>&ans,int &sum){
        if(root==NULL){
            return;
        }
        inorder(root->right,ans,sum);
        sum+=root->val;
        root->val=sum;
        inorder(root->left,ans,sum);
        // sum+=root->val;
        // ans.push_back(root->val);
        
    }
    TreeNode* convertBST(TreeNode* root) {
        vector<int>ans;
        int sum=0;
        inorder(root,ans,sum);
        
//         for(int i=ans.size()-1;i>=0;i--){
//             sum+=ans[i];
//             ans[i]=sum;
//         }
        
//         cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[4];
//         inorderr(root,ans);
        return root;
        
    }
};