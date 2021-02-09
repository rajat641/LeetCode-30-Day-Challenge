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
    vector< TreeNode* > ans;
    void postorder(TreeNode* root){
        if(root==NULL) return;
        postorder(root->right);
        ans.push_back(root);
        postorder(root->left);
    }
   
    TreeNode* convertBST(TreeNode* root) {
        postorder(root);
        int prev =0;
        for(auto &u:ans){
            u->val = u->val+prev;
            prev = u->val;
        }
        return root;
    }
};
