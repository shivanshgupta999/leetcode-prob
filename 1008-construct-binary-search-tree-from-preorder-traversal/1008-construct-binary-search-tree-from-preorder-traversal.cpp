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
    TreeNode* bstFromPreorder(vector<int>& pre) {
        int n =pre.size();
        if(n==0)
            return NULL;
        TreeNode* root= new TreeNode(pre[0]);
        if(n==1)
            return root;
        int i;
        for( i=0;i<n;i++){
            if(pre[i]>pre[0])
                break;
        }
        vector<int> leftsub(pre.begin()+1, pre.begin()+i);
        vector<int> rightsub(pre.begin()+i, pre.end());
   
        root->left=bstFromPreorder(leftsub);
        root->right=bstFromPreorder(rightsub);
        return root;
    }
};