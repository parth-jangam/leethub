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
    TreeNode* merger(int start,int end,vector<int>& nums){
        if(start>end){
            return NULL;
        }
        
        int mid=(start+end)/2;
        TreeNode* temp=new TreeNode(nums[mid]);
        temp->left=merger(start,mid-1,nums);
        temp->right=merger(mid+1,end,nums);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        return merger(start,end,nums);
    }
};