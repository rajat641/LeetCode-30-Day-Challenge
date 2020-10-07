/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        int sz = 0;
        ListNode* x = head;
        while(x){
            x = x->next;
            ++sz;
        }
        k = k%sz;
     //  cout<<k<<endl;
      //  cout<<sz<<endl;
        int diff = sz- k;
        x= head;
        for(int i=1;i<diff;i++){
            x = x->next;
            //--diff;
        }
        ListNode* y = x;
        while(y->next!=NULL){
            y = y->next;
        }
     //   cout<<x->val<<endl;
       
       
        y->next = head;
         head = x->next;
         x->next = NULL;
        return head;
        
    }
};
