/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void level(vector<Node*>&temp,Node* root,int i){
        if(root==NULL){
            return;
        }
        if(i==1){
            temp.push_back(root);
        }
        level(temp,root->left,i-1);
        level(temp,root->right,i-1);
    }
    int height(Node* root){
        if(root==NULL){
            return 0;
        }
        int a=height(root->left);
        int b=height(root->right);
        return 1+max(a,b);
    }
    Node* connect(Node* root) {
        vector<vector<Node*>>level_data;
        
        int h=height(root);
        for(int i=1;i<=h;i++){
            vector<Node*>temp;
            level(temp,root,i);
            level_data.push_back(temp);
        }
        for(auto x:level_data){
            int i=0;
            while(i<x.size()){
                if(i==x.size()-1){
                    x[i]->next=NULL;
                }
                else{
                    x[i]->next=x[i+1];
                }
                i++;
            }
        }
        return root;
    }
};