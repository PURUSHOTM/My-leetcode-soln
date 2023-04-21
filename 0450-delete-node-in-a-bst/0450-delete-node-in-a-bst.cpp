class Solution {
public:
    TreeNode* findmin(TreeNode* root){
        TreeNode* temp = root;
        while(temp && temp->left){
            temp = temp->left;
        }
        return temp;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) {
            return NULL;
        }
        if(root->val == key){
            // if zero child
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }

            // if one child
            if(root->left != NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            if(root->left == NULL && root->right != NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // if two child-
            if(root->left != NULL && root->right!= NULL){
                int mini = findmin(root->right)->val;
                root->val = mini;
                root->right = deleteNode(root->right , mini);
                return root;
            }
        }
        
        if(key < root->val){
            root->left = deleteNode(root->left , key);
        }
        else if(key > root ->val ) {
            root->right = deleteNode(root->right , key);
        }
        return root;
    }
};


 