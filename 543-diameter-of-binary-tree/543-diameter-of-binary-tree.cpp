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
    
    pair<int,int> x(TreeNode* root){
        if(root==NULL){
            pair<int,int> p(0,0);
        return p;
        }
      pair<int,int> l=   x(root->left);
        pair<int,int> r=  x(root->right);
        int ld= l.second;
        int rd= r.second;
        
            
            int h= 1+ max(l.first,r.first);
          int d= max(l.first + r.first , max(ld,rd));
         pair<int,int> p(h,d);
        return p;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        pair<int,int> p=x(root); 
            return p.second;
    }
};