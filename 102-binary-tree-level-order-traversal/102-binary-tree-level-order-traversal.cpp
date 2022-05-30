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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)
            return  v;
        queue<TreeNode* > q;
        q.push(root);
        q.push(NULL);
        vector<int> t;
                 v.push_back(t);
        int l=0;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                l++;
                if(!q.empty()){
                 q.push(NULL);
                 vector<int> t;
                 v.push_back(t);
            }
                 continue;
            }
            
            v[l].push_back(temp->val);
             
            if(temp->left!=NULL)
                q.push({temp->left});
            
            
            if(temp->right!=NULL)
                q.push({temp->right});
            
            
             
        
        }
            return v;
    }
};