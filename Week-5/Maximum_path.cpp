

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
    int ans =INT_MIN;
    
    int s(TreeNode* root){
        if(root==NULL) return 0;
        int left = s(root->left);
        int right = s(root->right);
        
        ans = max(max(ans, left+right+ root->val),max(root->val,max(right, left)+root->val));
        return max(root->val,max(right, left)+root->val);
        
    }
    
    int maxPathSum(TreeNode* root) {
       ans = max( ans, s(root));
    return ans;
    }
};
