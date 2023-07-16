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
    TreeNode* create(vector<int>inorder, vector<int>postorder,int &index,int start,int end, map<int,int>&parth){
        if(start>end ){
            return NULL;
        }
        int value= postorder[index--];
        TreeNode* root=new TreeNode(value);
        int position=parth[value];
        root->right=create(inorder,postorder,index,position+1,end,parth);
        root->left=create(inorder,postorder,index,start,position-1,parth);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>parth;
        int pre_index=inorder.size()-1;
        int i=0;
        while(i<inorder.size()){
            parth[inorder[i]]=i;
            i++;
        }
        return create(inorder,postorder,pre_index,0,inorder.size()-1,parth);
    }
};