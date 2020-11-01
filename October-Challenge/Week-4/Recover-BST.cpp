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
    void recoverTree(TreeNode* root) {
        vector< TreeNode* > tryy;
        vector< int> rr;
        stack< TreeNode* > st;
        while(!st.empty() || root!=NULL){
            while(root!=NULL){
                st.push(root);
                root = root->left;
            
            }
         root = st.top() ; st.pop();
         tryy.push_back(root);
        rr.push_back(root->val);
           root = root->right;
        }
        sort(begin(rr), end(rr));
        TreeNode* first = NULL;
        TreeNode* second = NULL;
        for(int i=0;i<rr.size();i++){
          //  cout<<tryy[i]->val<<endl;
            if(rr[i]!=tryy[i]->val){
                if(first==NULL) first = tryy[i];
                else{
                    second = tryy[i]; break;
                }
            }
        }
     //   cout<<first->val<<" "<<second->val<<endl;
        if(first!=NULL && second!=NULL){
            int temp;
            temp =first->val;
            first->val = second->val;
            second->val = temp;
        }
        
        
    }
};
