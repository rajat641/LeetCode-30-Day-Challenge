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
    unordered_map<TreeNode*, int>dp;
    int rob(TreeNode* root) {
         if(root==NULL){
            dp[root]=0;
             return 0;
        }
        if(dp[root]) return dp[root];
        int res = root->val;
        int leftval = 0, rightval =0;
        if(root->left) leftval = rob(root->left->left)+rob(root->left->right);
        if(root->right) rightval = rob(root->right->left)+rob(root->right->right);
        
        return dp[root] = max(res+leftval+rightval, rob(root->left)+rob(root->right));
    }
};
