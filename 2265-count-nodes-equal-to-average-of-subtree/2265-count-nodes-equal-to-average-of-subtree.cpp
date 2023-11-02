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
int sum=0;
int a=0;
class Solution {
    void hollo(TreeNode* root, int &sum,int &count){
        if(root==NULL){
            return;
        }
        if(root!=NULL){
            sum=sum+root->val;
            count++;
        }
         hollo(root->left,sum,count);
         hollo(root->right,sum,count);
    }
    void hello(TreeNode* root,int &p){
        
        if(root==NULL){
            return;
        }
        int sum=0;
        int count=0;
        hollo(root,sum,count);
        if(sum/count==root->val){
            p++;
        }
        hello(root->left,p);
        hello(root->right,p);
        
        
       

        
    }
public:
    int averageOfSubtree(TreeNode* root) {
        int p=0;
        
        hello(root,p);
        return p;
    }
};