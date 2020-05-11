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
    map< int , TreeNode* >fin(TreeNode* root, int depth, int x){
        if(root==NULL){
            map< int, TreeNode*> m;
            return m;
        }
        map< int, TreeNode*> m;
        if((root->left!=NULL && root->left->val==x)||((root->right!=NULL && root->right->val==x))){
            m[depth] = root;
            return m;
        }
        map< int, TreeNode*> i = fin(root->left, depth+1, x);
        map< int, TreeNode*> j = fin(root->right, depth+1, x);
        if(i.empty()) return j;
        return i;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return 1==2;
        map< int, TreeNode*> i =fin(root, 0, x);
        map< int, TreeNode*> j =fin(root, 0, y);
        if(i.empty() || j.empty()) return 0;
        return (i.begin()->first == j.begin()->first && i.begin()->second != j.begin()->second);
    }
};
