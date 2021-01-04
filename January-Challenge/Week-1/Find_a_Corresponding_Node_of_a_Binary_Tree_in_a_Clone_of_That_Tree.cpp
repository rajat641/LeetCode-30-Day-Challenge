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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL ) return NULL;
        if(original->val==target->val) return cloned;
        
        TreeNode* a = getTargetCopy(original->left, cloned->left, target);
        TreeNode* b = getTargetCopy(original->right, cloned->right, target);
        //if(a==NULL && b==NULL) return cloned;
        return a== NULL ? b:a;
    }
};