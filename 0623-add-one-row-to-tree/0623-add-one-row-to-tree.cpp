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
    void traverse(TreeNode* root,int val, int depth,int i){
        if(root==NULL){
            return;
        }
        if(i+1==depth){
            TreeNode* temp1=root->left;
            TreeNode* temp2=root->right;
            TreeNode* l=new TreeNode(val);
            root->left=l;
            l->left=temp1;
            TreeNode* r=new TreeNode(val);
            root->right=r;
            r->right=temp2;
            return ;
        }
        traverse(root->left,val,depth,i+1);
        traverse(root->right,val,depth,i+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* temp1=root->left;
            TreeNode* l=new TreeNode(val);
            l->left=root;
            // l->left=temp1;
            return l;
        }
        traverse(root,val,depth,1);
        return root;
    }
};