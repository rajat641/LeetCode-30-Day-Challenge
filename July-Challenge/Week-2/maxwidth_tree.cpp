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
    int widthOfBinaryTree(TreeNode* root) {
        deque< pair< TreeNode* , double > >q;
        if(root==NULL) return 0;
        q.push_back({root, 0});
        double ans  =0;
        while(!q.empty()){
            int sz = q.size();
        //    cout<< sz<<endl;
            double rmax = q[0].second;
            double lmax =  q[sz-1].second;
            ans = max(ans , abs(lmax-rmax)+1);
            for(int u=0;u<sz;u++){
                TreeNode* d = q.front().first;
             //   if(d==NULL) continue;
                double  par =  q.front().second;
            //    cout<< par<< endl;
                q.pop_front();
                if(d->left!=NULL){
                    q.push_back({d->left, 2*par+1});
                }
                if(d->right!=NULL){
                    q.push_back({d->right, 2*par+2});
                }
            }
        }
        return ans;
    }
};
