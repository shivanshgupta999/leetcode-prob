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
          if(root==NULL)
            return 0;
        
    queue<pair<TreeNode* , int>> q;
        int ans=0;
        q.push({root,0});
        while(!q.empty()){
             int f=0,l=0;
            long long curid=0;
            int n = q.size();          
            int curmin =q.front().second ;
            
            for(int i=0;i<n;i++){
                
                 pair<TreeNode* , int> temp = q.front();
                  q.pop();
                curid = temp.second - curmin;
               if(i==0)
                   f=curid;
                if(i==n-1)
                    l=curid;
              
                if(temp.first->left!=NULL){
                q.push({temp.first->left,2*curid+1 });
            }
            
            if(temp.first->right!=NULL){
                q.push({temp.first->right, 2*curid+2 });
            } 
            }
              
                ans=max(ans,l-f+1);
            
        }
         return ans;
           
            
}
};