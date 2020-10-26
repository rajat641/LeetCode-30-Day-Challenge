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
    int ans = INT_MAX;
    int recur(TreeNode* root){
          if(root==NULL) return INT_MAX;
        if(root->left==NULL && root->right==NULL) return 1;
        int leftdis = recur(root->left);
        int rightdis = recur(root->right);
     //   ans = min(ans, min(leftdis, rightdis)+1);
        return min(leftdis, rightdis)+1;
    }
    
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
       // if(root==NULL) return 0;
         ans = recur(root);
        return ans ==INT_MAX ? 0: ans;
    }
};
