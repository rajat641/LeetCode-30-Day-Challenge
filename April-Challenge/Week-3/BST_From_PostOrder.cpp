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
    TreeNode* create(vector<int>& nums, int l , int h){
        if(l>h) return NULL;
        TreeNode* root = new TreeNode(nums[l]);
        int in;
        for(int u=l;u<=h;u++){
            if(nums[u]>nums[l]){
               in  =u;
                break;
            }
        }
        root->left = create(nums, l+1, in-1);
        root->right = create(nums, in, h); 
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int sz = preorder.size()-1;
        return create(preorder, 0, sz);
    }
};
