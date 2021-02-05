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
    TreeNode* recur(TreeNode* root, int low, int high){
        if(root==NULL) return NULL;
        TreeNode* l = root->left ? recur(root->left, low, high):NULL;
        TreeNode* r = root->right ?recur(root->right, low, high):NULL;
        if(root->val<low || root->val>high){
                if(l==NULL && r==NULL) return NULL;
                return l==NULL ? r:l;
        }
        root->left = l; root->right = r;
        return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return recur(root, low, high);
    }
};
