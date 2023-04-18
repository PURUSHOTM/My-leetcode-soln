 
class Solution {
public:
    int findindex(vector<int> inorder , int element){
        for(int i = 0; i < inorder.size(); i++) 
            if(inorder[i] == element) return i; 
         return -1;
        }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& index , int inorderstart , int inorderend , int n){
        if(index >= preorder.size() || inorderstart > inorderend) return NULL;
        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        int position = findindex(inorder , element);

        root->left = helper(preorder , inorder , index , inorderstart,  position-1, n);
        root->right = helper(preorder , inorder , index , position+1 , inorderend , n);
        return root;
}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderIndex = 0;
        int n = preorder.size();
        TreeNode* ans = helper(preorder , inorder , preorderIndex , 0 , n-1 , n);
        return ans;
    }
};