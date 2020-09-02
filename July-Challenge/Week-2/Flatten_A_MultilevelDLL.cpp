/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* x = head;
        while(x!=NULL){
            if(x->child==NULL){
                x=x->next;
            }else{
                Node* curr = x;
                Node* ch = curr->child;
                //Node* x = rr;
                while(ch->next!=NULL) ch=ch->next;
                Node* temp = curr->next;
                if(temp){
                    ch->next= temp;
                    temp->prev = ch;
                }
                curr->next =curr->child;
                curr->child->prev = curr;
                x->child = NULL;
                x=x->next;
                
            }
        }
        return head;
    }
};
