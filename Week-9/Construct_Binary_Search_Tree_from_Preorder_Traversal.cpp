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
    TreeNode* recur(vector< int>&p, int s, int e){
        if(s>=e) return NULL;
        TreeNode* root = new TreeNode(p[s]);
        int en = s;
        for(int j=s;j<e;j++){
            if(p[j]>p[s]){
                en = j; break;
            }
        }
        if(en== s){ // no right child exits
            root->right = NULL;
            root->left = recur(p,s+1, e);
        }else{  // right child exitsts
        root->left = recur(p,s+1, en);
        root->right = recur(p,en, e);
        }
        return root;
    }
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int sz = preorder.size();
        return recur(preorder, 0 , sz);
    }
};
