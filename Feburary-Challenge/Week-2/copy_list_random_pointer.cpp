/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* t = head;
         Node* H = NULL;
        Node* T = NULL;
        while(t!=NULL){
            Node* temp= new Node(t->val);
            
            if(H==NULL){
                H= temp;
                T= H;
            }else{
                T->next = temp;
                T= temp;
            }
            t = t->next;
        }
        //////////////////////////////////////////////////////////////////
        Node* x = H;
        t = head;
        vector< Node* > temporary;
        while(t!=NULL){
            temporary.push_back(t->next);
            x->random = t;
            x = x->next; 
            t= t->next;
        }
        /////////////////////////////////////////////////////////////////////////
        t = head;
        x = H;
        while(t!=NULL){
        Node* r = t->next;
           t->next = x;
            t = r;
            x = x->next;
        }
//         //////////////////////////////////////////////////////////
        
        x = H;
        while(x!=NULL){
            Node* p = x->random;
            if(p->random!=NULL){
                p = p->random;
                if(p->next!=NULL) p=p->next;
                x->random=p;
            }else x->random = NULL;
            x= x->next;
            
        }
        x = head;
        int i =0;
        while(x!=NULL){
            x->next = temporary[i++];
            x= x->next;
        }
        return H;
    }
};
