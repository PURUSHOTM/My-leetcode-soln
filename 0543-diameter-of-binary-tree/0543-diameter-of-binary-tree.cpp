/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    private:

        int height(TreeNode *root)
        {
            if (root == nullptr) return 0;

            int h1 = height(root->left);
            int h2 = height(root->right);
            int ans = max(h1, h2) + 1;

            return ans;
        }
    public:
        int diameterOfBinaryTree(TreeNode *root)
        {
            if (root == nullptr) return 0;

            int d1 = diameterOfBinaryTree(root->left);
            int d2 = diameterOfBinaryTree(root->right);
            int d3 = height(root->left) + height(root->right) ;

            int ans = max(d1, max(d2, d3));

            return ans;
        }
};