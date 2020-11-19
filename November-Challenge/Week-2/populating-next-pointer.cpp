/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL || root->left==NULL&&root->right==NULL) return root;
        queue< Node* > Q;
        Q.push(root);
        while(!Q.empty()){
            Node* p = Q.front(); Q.pop();
            if(p==NULL) continue;
            if(p->left==NULL || p->right==NULL) continue;
            p->left->next = p->right;
            if(p->next) p->right->next = p->next->left;
            Q.push(p->left);
            Q.push(p->right); 
        }
        return root;
    }
};
