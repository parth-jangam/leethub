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
class BSTIterator {
public:
    vector<TreeNode*>inorder;
    void traversal(TreeNode* root,vector<TreeNode*>&inorder){
        if(root==NULL){
            return;
        }
        traversal(root->left,inorder);
        inorder.push_back(root);
        traversal(root->right,inorder);
    }
    BSTIterator(TreeNode* root) {
        traversal(root,inorder);
        
    }
    int i=0;
    int next() {
        i++;
        return inorder[i-1]->val;
        
    }
    
    bool hasNext() {
        if(i<inorder.size()){
            return true;
        }
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */