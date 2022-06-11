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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root)
            return v;
        queue<TreeNode*> q;
        int l=0;
        q.push(root);
       
        
        while(!q.empty()){
            int n=q.size();
            vector<int> x(n);
               
            for(int i=0;i<n;i++){
                 TreeNode* t=q.front();
                  q.pop();
                if(l%2==0)
                x[i]=t->val;
                else{
                    x[n-i-1]=t->val;
                }
                 if(t->left!=NULL)
                    q.push(t->left);
                 if(t->right!=NULL)
                    q.push(t->right);
            }
            v.push_back(x);
            l++;
        }
        return v;
    }
};


/*


  v.push_back(1,vector<int>(1,0));
        queue<TreeNode*> ql;
         queue<TreeNode*> qr;
        int l=0;
        ql.push(root);
        ql.push(NULL);
        
        while(!ql.empty()){
            TreeNode* t=ql.front();
            ql.pop();
            if(t==NULL){
                l++;
                if(!q.empty()){
                 q.push(NULL);
                 vector<int> t;
                 v.push_back(t);
            }
                 continue;
            }
            
            v[l].push_back(temp->val);
             
            if(l%2==0){
              vector<int> x;
                x.push_back(root->val);
                v
                    if(root->right!=NULL)
                    ql.push(root->right);
 
                if(root->left!=NULL)
                    ql.push(root->left);
            }
            else{
                
                
                
                  if(root->left!=NULL)
                    ql.push(root->left);
                 if(root->right!=NULL)
                    ql.push(root->right);
 
            }
        }
        */