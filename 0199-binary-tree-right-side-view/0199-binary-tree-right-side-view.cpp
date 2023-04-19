 
class Solution {
public: 
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(root==NULL)
            return {};

        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> res;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                res.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(res);
        }
         for(int i=0;i<ans.size();i++){
             for(int j=ans[i].size()-1;j>=0;j--){
                 v.push_back(ans[i][j]);
                 break;
             }
         }
         return v;
    }
};