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
    bool x(TreeNode* l,TreeNode* r){
         if(l==NULL || r==NULL)
            return l==r;
        
        if(l->val!=r->val){
            return false;
        }
       
    bool a=    x(l->left,r->right);
      bool b=      x(l->right,r->left);
            if(a&& b)
                return true;
            return false;
    }
    
    
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool check;
        if(root->left!=NULL && root->right!=NULL && root->left->val == root->right->val)
           check= true;
        else if(root->left==NULL || root->right==NULL){
            return root->left==root->right;
        }
        bool ans=x(root->left,root->right);
     
        if(ans&& check )
            return true;
        return false;
    }
};