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
    bool ch(string a){
        map< char , int > m;
        for(auto i:a) m[i]++;
        int odd=0;
        for(auto i:m){
            if(i.second%2==1) ++odd;
            if(odd>1) return 0;
        }
        return 1;
    }
    vector<string> postorder(TreeNode* root){
        if(root==NULL){ vector< string >p; return p;}
        vector< string > ans;
        auto x = postorder(root->left);
        auto y = postorder(root->right);
        if(x.empty() && y.empty()) ans.push_back(to_string(root->val));
        for(auto i:x){
            string t = i;
            t += to_string(root->val);
            ans.push_back(t);
        }
        
        for(auto i:y){
            string t = i;
            t += to_string(root->val);
            ans.push_back(t);
        }
        
        return ans;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<string> ans = postorder(root);
        cout<< ans.size();
        int cnt = 0;
        for(auto i: ans){
           // cout<<i<<endl;
            if(ch(i))++cnt;
        }
        return cnt;
    }
};
