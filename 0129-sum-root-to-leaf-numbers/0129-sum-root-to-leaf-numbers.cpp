class Solution {
public: 
    int sumNumbersHelper(TreeNode* root, int digitSum) {
        if (root == NULL) return 0; 
        digitSum = digitSum*10 + root->val; 
        if (root->left == NULL && root->right == NULL) {
            return digitSum;
        }  
        return sumNumbersHelper(root->left, digitSum) + sumNumbersHelper(root->right, digitSum);
    }
    int sumNumbers(TreeNode* root) {
        return sumNumbersHelper(root, 0);
    }
};
