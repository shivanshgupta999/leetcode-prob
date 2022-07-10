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
class BSTIterator {
    stack<TreeNode* > st;
public:
    
    BSTIterator(TreeNode* root) {
        x(root);
    }
    
    int next() {
        TreeNode* t=st.top();
        st.pop();
        x(t->right);
        return t->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
    void x(TreeNode* root) {
        TreeNode* t= root;
        while(t!=NULL){
            st.push(t);
        t=t->left;            
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
