class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        if (root == NULL) {
            return 0;
        }
        if (root->val % 2 == 0) {
            if (root->left != NULL && root->left->left != NULL) {
                sum += root->left->left->val;
            }
            if (root->left != NULL && root->left->right != NULL) {
                sum += root->left->right->val;
            }
            if (root->right != NULL && root->right->left != NULL) {
                sum += root->right->left->val;
            }
            if (root->right != NULL && root->right->right != NULL) {
                sum += root->right->right->val;
            }
        }
         
        return sum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
    } 
};
