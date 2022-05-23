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
    vector<int> v;
    int level=0;
    vector<int> rightSideView(TreeNode* root) {
        
        if(root==NULL) {
            level--;
            return v ;
        }
        
         if(v.size()==level) 
              v.push_back(root->val);
         if(root->right){
            level++;
        rightSideView(root->right);
        }
        if(root->left){
            level++;
        rightSideView(root->left);
            
        }
       
        level--;
        return v;
    }
};


