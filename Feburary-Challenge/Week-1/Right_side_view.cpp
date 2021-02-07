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
    vector<int> rightSideView(TreeNode* root) {
        deque< TreeNode* > q;
        vector<int>ans;
        if(root)q.push_back(root);
        while(!q.empty()){
            int sz = q.size();
            auto p = q.front(); 
            ans.push_back(p->val);
            for(int i=0;i<sz;i++){
                auto p = q.front(); q.pop_front();
                if(p->right)q.push_back(p->right);
                if(p->left)q.push_back(p->left);
                
            }
        }
        return ans;
    }
};
