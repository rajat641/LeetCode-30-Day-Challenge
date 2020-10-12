/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    void recur(TreeNode* root, string &ans){
            if(root==NULL){
              //  ans+='#,';
                return;
            }
        ans+=to_string(root->val)+',';
        recur(root->left, ans);
        recur(root->right, ans);
        
    }
    string serialize(TreeNode* root) {
            string ans = "";
          recur(root, ans);
         return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* conv(deque< string>&q, int mi , int ma){
        if(q.empty()) return NULL;
        int p = stoi(q.front()); 
        
        if(p<mi || p>ma){return NULL;} 
        TreeNode* root = new TreeNode(p);
        q.pop_front();
        root->left = conv(q, mi,p);
        root->right = conv(q, p+1, ma);
       return root;
        
    }
    
    TreeNode* deserialize(string data) {
        string temp = "";
        deque< string >q;
     //   cout<<data<<endl;
        int sz = data.length();
        for(int i=0;i<sz;i++){
            if(data[i]==','){
                q.push_back(temp);
                temp="";
            }else{
                temp+=data[i];
            }
        }
  //      if(temp!="") q.push_back(temp);
    //    cout<<q.size();
        return conv(q, INT_MIN, INT_MAX);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
