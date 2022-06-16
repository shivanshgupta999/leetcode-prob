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
     TreeNode* b(vector<int>& preorder, vector<int>& inorder,int pres,int pree,int ins,int ine,unordered_map<int,int>& mp){
       if(pres>pree|| ins>ine){
           return NULL;
       }
       TreeNode* root=new TreeNode(preorder[pres]);
         int cnt=mp[preorder[pres]]-ins;
         
         // cnt=2
         // pre r,9,1,20,15,7,8   pres=0,1 pree=7,        
         //                                                                           pres,ins    pree,ine
                                                            //[1,      2,                4,      3]
//                                                            [1,      2,                3  ,    4]
         //  in 1,9,r,8,15,20,7   ins=0 ine=7               ans - 1,null,
       root->left= b(preorder,inorder,pres+1,(pres+cnt),ins,ins+cnt-1,mp);
       root->right= b(preorder,inorder,pres+cnt+1,pree,ins+cnt+1,ine,mp);
         
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       
        int n=preorder.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
return b(preorder,inorder,0,n-1,0,n-1,mp);
    }
};