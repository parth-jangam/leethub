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
      bool is_true(TreeNode* root1,TreeNode* root2){
        if(root1==NULL && root2==NULL){
            return true;
        }
        if((root1==NULL && root2!=NULL ) || (root1!=NULL && root2==NULL)){
            return false;
        }
        if(root1!=root2 && root1->val!=root2->val){
            return false;
        }
        return is_true(root1->left,root2->right) && is_true(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return is_true(root,root);
    }
};