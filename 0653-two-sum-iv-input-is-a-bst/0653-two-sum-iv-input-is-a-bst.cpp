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
    private:stack<TreeNode*>st;
    bool reverse=true;
public:
    
    BSTIterator(TreeNode* root,bool isReverse) {
        reverse=isReverse;
        pushAll(root);
    }
    
    int next() {
        TreeNode* nxt=st.top();
        st.pop();
        if(!reverse)pushAll(nxt->right);
        else pushAll(nxt->left);
        return nxt->val;
    }
    
    bool hasNext() {
      return !st.empty();  
    }
    private:
    void pushAll(TreeNode* root){
        while(root!=NULL){
            st.push(root);
            if(reverse) root=root->right;
            else root=root->left;
        }
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        int i=l.next();
        int j=r.next();
        while(i<j){
            if(i+j==k) return true;
            else if(i+j<k)i=l.next();
            else j=r.next();
        }
        return false;
    }
};