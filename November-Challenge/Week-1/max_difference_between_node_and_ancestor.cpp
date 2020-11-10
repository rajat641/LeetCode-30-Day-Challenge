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
    int ans = 0;
    void recur(TreeNode* root, int ma , int mi){
        if(root==NULL) return;
        ans = max(ans, abs(ma-root->val));
        ans = max(ans, abs(mi-root->val));
        recur(root->left, max(ma, root->val), min(mi, root->val));
        recur(root->right, max(ma, root->val), min(mi, root->val));
        
        
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        recur(root, root->val, root->val);
        return ans;
    }
};
