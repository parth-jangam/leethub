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
    void max_sum(int i,int &maxi,TreeNode* root){
        if(root==NULL){
            return;
        }
        if(i==1){
            maxi+=root->val;
        }
        max_sum(i-1,maxi,root->left);
        max_sum(i-1,maxi,root->right);
    }
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int a=height(root->left);
        int b=height(root->right);
        return 1+max(a,b);
    }
    int maxLevelSum(TreeNode* root) {
        int h=height(root);
        // int maxi=0;
        int fina;
        int ans=INT_MIN;
        for(int i=1;i<=h;i++){
            int maxi=0;
            
            max_sum(i,maxi,root);
            if(ans<maxi){
                ans=maxi;
                fina=i;
            }
        }
        return fina;
            
    }
};