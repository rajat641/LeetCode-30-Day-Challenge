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
    TreeNode* searchBST(TreeNode* root, int val) {
                if(root==NULL) return NULL;
                if(root->val == val) return root;   
             TreeNode* l= NULL; TreeNode* r = NULL;
            if(root->val >=val){
                l = searchBST(root->left, val);}
            else {
                r =searchBST(root->right, val);}
        return l==NULL ? r:l;
    }
};
