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
    ListNode* sortList(ListNode* head) {
            if(head==NULL) return head;
            if(head->next == NULL) return head;
           ListNode* s = head;
           ListNode* f = head;
          while(f->next!=NULL && f->next->next!=NULL){
              s = s->next;
              f = f->next->next;
          }
        ListNode* newh1 = head;
        ListNode* newh = s->next;
        s->next = NULL;
        ListNode* left = sortList(newh1);
        
        
        ListNode* right = sortList(newh);
        if(left==NULL || right==NULL) return left ==NULL ? right: left;
        // merge step
        ListNode* newhead = NULL;
        ListNode* tail = NULL;
        cout<<left->val;
        cout<<right->val;
        while(left!=NULL && right!=NULL){
            if(left->val >=right->val){
                if(newhead==NULL){
                    newhead = right;
                    tail = right;
                }else{
                    tail->next = right;
                    tail = right;
                }
                right = right->next;
            }else{
                if(newhead==NULL){
                    newhead = left;
                    tail = left;
                }else{
                    tail->next = left;
                    tail = left;
                }
                
                left = left->next;
                
            }
        }
        if(left!=NULL){
            tail->next = left;
        //    tail = left;  
        }
        if(right!=NULL){
            tail->next = right;
          //  tail = right;
        }
      //  if(tail==NULL) return newhead;
       // tail->next = NULL;
        return newhead;
    }
};
