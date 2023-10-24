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
    void traverse(TreeNode* root,int level,set<pair<int,int>>&mappe){
        if(root==NULL){
            return ;
        }
        mappe.insert({level,root->val});
        traverse(root->left,level+1,mappe);
        traverse(root->right,level+1,mappe);
    }
    int height(TreeNode* root){
        if(root ==NULL){
            return 0;
        }
        int a=height(root->left);
        int b=height(root->right);
        return 1+max(a,b);
    }
    vector<int> largestValues(TreeNode* root) {
        set<pair<int,int>>mappe;
        traverse(root,0,mappe);
        int h=height(root);
        vector<int>ans(h,INT_MIN);
        for(auto x:mappe){
            
            if(ans[x.first]<x.second){
                ans[x.first]=x.second;
            }
        }
        return ans;
    }
};