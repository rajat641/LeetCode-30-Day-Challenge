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
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode* > Q;
        Q.push(root);
        while(!Q.empty()){
            int sz = Q.size();
            double P =0;
            for(int j=0;j<sz;j++){
                auto u = Q.front(); Q.pop();
                P+= u->val;
                if(u->left) Q.push(u->left);
                if(u->right) Q.push(u->right);
                
            }
            ans.push_back(P/sz);
            
        }
        return ans;
    }
};
