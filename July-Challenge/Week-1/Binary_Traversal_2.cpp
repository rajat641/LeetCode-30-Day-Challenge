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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector< vector< int > >sol;
        queue< TreeNode* > q;
        if(root==NULL) return sol;
        q.push(root);
        while(!q.empty()){
            vector< int > temp;
            int sz = q.size();
            for(int i=0;i<sz;i++){
                TreeNode* w = q.front(); q.pop();
                if(w->left) q.push(w->left);
                if(w->right) q.push(w->right);
                temp.push_back(w->val);
            }
            sol.push_back(temp);
            
        }
        
        
        reverse(sol.begin(), sol.end());
        return sol;
    }
};
