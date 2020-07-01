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
    void recur(TreeNode*root, int &ans, string temp){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            temp+= to_string(root->val);
            ans+=stoi(temp);
            temp.pop_back();
            return;
        }
        temp+= to_string(root->val);
        recur(root->left, ans, temp);
        recur(root->right, ans, temp);
        
    }
    
    
    int sumNumbers(TreeNode* root) {
            int ans =0;
        string temp = "";
            recur(root, ans, temp);
            return ans;
    }
};
