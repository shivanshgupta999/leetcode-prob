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
    class x{
        public:
        bool isbst;
        long mini;
        long maxi;
    };
    x fn(TreeNode* root){
         if(root==NULL){
            x op;
             op.isbst=true;
             op.mini=LONG_MAX;
            op.maxi= LONG_MIN;
             return op;
        }
      x l=  fn(root->left);
      x r=  fn(root->right);
         x op;
             op.isbst=l.isbst && r.isbst && (l.maxi<root->val)&& (r.mini>root->val);
             op.mini=min((long)root->val,l.mini);
            op.maxi= max((long)root->val,r.maxi);
        return op;
        }
    bool isValidBST(TreeNode* root) {
       
       return fn(root).isbst;
    }
};