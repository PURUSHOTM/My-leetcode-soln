 
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int key) {
        if(root == NULL ){
         root = new TreeNode(key);
         return root;
     }
     if(key > root ->val) {
         root-> right = insertIntoBST(root->right , key);
     }
     else if(key < root->val){
         root->left = insertIntoBST(root->left , key);
     }
     return root;
    }
};
 

















