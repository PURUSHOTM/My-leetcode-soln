class Solution {
public:

    bool solve(TreeNode*root, int value){
        if(root==NULL)return true;
        if(root->val != value)return false;

        return solve(root->left, value) && solve(root->right, value);
        
    }
    bool isUnivalTree(TreeNode* root) {
        int value = root->val;
        return solve(root, value);
    }
};