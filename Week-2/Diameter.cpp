/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans =0;
    int dia(TreeNode* root){
        if(root==NULL) return 0;
        if(root && root->left==NULL && root->right==NULL) return 1;
        int leftdia = dia(root->left);
        int rightdia = dia(root->right);
        ans = max(ans, leftdia +rightdia);
        return max(leftdia, rightdia)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dia(root);
        return ans;
    }
};
