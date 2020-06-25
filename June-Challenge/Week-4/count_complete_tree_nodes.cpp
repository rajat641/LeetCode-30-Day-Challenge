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
    int depth;
    
    bool exists(int id, TreeNode* root, int j){
            int left = 0;
            int right = (1<<depth)-1;
        TreeNode* x = root;
        for(int i=0;i<depth;i++){
            int m = left+(right-left)/2;
            if(id<=m){
                x= x->left;
                right=m-1;
            }else{
                x= x->right;
                left= m+1;
            }
            
            
        }
        return x!=NULL;
        
        
    }
    
    
    int func(int nodes_count, TreeNode* root){
        int l =0;
        int h = nodes_count-1;
        int ans = 0;
        TreeNode* x = root;
        while(l<=h){
            int m = l+(h-l)/2;
            if(exists(m, root, nodes_count)){
                ans = m;
                l= m+1;
            }else{
                h= m-1;
            }
            
            
        }
        return ans;  
    }
    
    
    int countNodes(TreeNode* root) {
                int level=0;
        if(root==NULL) return 0;
            TreeNode* t = root;
        while(t->left!=NULL){
            level++;
            t=t->left;
        }
        int nodes_at_last_level = 1<<level;
        int total_nodes = 1<<(level+1)-1;
        depth = level;
        return total_nodes + func(nodes_at_last_level, root);
        
        
    }
};
