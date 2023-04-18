 
class Solution {
public:
    int findindex(vector<int> inorder , int element){
        for(int i = 0; i < inorder.size(); i++) 
            if(inorder[i] == element) return i; 
         return -1;
    }

    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int& index , int inorderstart , int inorderend , int n){
        if(index < 0 || inorderstart > inorderend) return NULL;
        int element = postorder[index--];
        TreeNode* root = new TreeNode(element);
        int position = findindex(inorder , element);

        root->right = helper(inorder , postorder , index , position+1 , inorderend , n);
        root->left = helper(inorder , postorder , index , inorderstart,  position-1, n);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        int postorderIndex = n-1;
        TreeNode* ans = helper(inorder , postorder , postorderIndex , 0 , n-1 , n);
        return ans;
    }
};