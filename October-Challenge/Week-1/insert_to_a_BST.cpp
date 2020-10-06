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
   
    void ins(TreeNode* root, TreeNode* k, int &fl){
        if(root==NULL) return ;
        if(root->val<k->val){
            ins(root->right, k, fl);
           if(fl==0){
               fl = 1;
               root->right = k;
           }
        }else {
            ins(root->left, k, fl);
              if(fl==0){
               fl = 1;
               root->left = k;
           }
          
        }
        
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
            TreeNode* k = new TreeNode(val);
        if(root==NULL) return k;
        int fl = 0;
            ins(root, k, fl);
            return root;              
    }
};
