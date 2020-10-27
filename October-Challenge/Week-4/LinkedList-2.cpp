/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* s =head;
        ListNode* f =head;
        int fl = 0;
        if(head==NULL || head->next==NULL) return NULL;
        if(head->next==head) return head;
        while(f!=NULL && f->next!=NULL){
            s = s->next;
            f = f->next->next;
            if(s==f){
                fl=1; break;
            }
        }
         if(!fl) return NULL;
        s = head;
        
        ListNode* prev = NULL;
        while(1){
           if(s==f) break;
            s= s->next;
            f= f->next;
             
            
        }
        return s;
    }
};
