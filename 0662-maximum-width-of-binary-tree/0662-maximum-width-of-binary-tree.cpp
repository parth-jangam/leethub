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
    int widthOfBinaryTree(TreeNode* root) {
        unordered_map<int, unsigned long long> firstIndex;
        return dfs(root, 0, 0, firstIndex);
    }
private:
    unsigned long long dfs(TreeNode* root, int level, unsigned long long index, unordered_map<int, unsigned long long>& firstIndex) {
        if(!root) return 0;
        if(firstIndex.find(level) == firstIndex.end()) {
            firstIndex[level] = index;
        }
        unsigned long long left = dfs(root->left, level + 1, 2 * index, firstIndex);
        unsigned long long right = dfs(root->right, level + 1, 2 * index + 1, firstIndex);
        return max(index - firstIndex[level] + 1, max(left, right));
    }
};
// class Solution {
// public:
//     void level(TreeNode* root,int leveel, int i,int &min,int &maxx){
//         if(root==NULL){
//             return;
//         }
//         if(i==leveel){
//             if(root->val>maxx){
//                 maxx=root->val;
//             }
//             if(root->val<min){
//                 min=root->val;
//             }
//         }
//         level(root->left,leveel,i+1,min,maxx);
//         level(root->right,leveel,i+1,min,maxx);
//     }
//     void traverse(TreeNode* root){
//         if(root==NULL){
//             return;
//         }
//         if(root->left){
//             long long int a=2*root->val;
//             root->left->val=a;
//         }
//         if(root->right){
//             long long int b=(2*root->val)+1;
//             root->right->val=b;
//         }
//         traverse(root->left);
//         traverse(root->right);
//     }
//     int height(TreeNode* root){
//         if(root==NULL){
//             return 0;
//         }
//         int a= height(root->left);
//         int b= height(root->right);
//         return 1+max(a,b);
//     }
//     int widthOfBinaryTree(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         traverse(root);
//         int h= height(root);
//         int ans=0;
//         root->val=1;
//         for(int i=1;i<=h;i++){
//             int min=INT_MAX;
//             int maxx=INT_MIN;
//             level(root,i,1,min,maxx);
//             ans=max(ans,maxx-min);
//         }
//         return ans+1;
//     }
// };