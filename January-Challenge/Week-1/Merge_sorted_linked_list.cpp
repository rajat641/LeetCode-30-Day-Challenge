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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* x  = l1;
        ListNode* y  = l2;
        ListNode* head = NULL; ListNode* temp = NULL;
        while(x&&y){
            if(x->val<=y->val){
                ListNode* x1 = new ListNode(x->val);
                if(head ==NULL) {
                    head = x1;
                    temp = head;
                }else{
                    temp->next = x1;
                    temp = temp->next;
                }
                x = x->next;
            }else{
                ListNode* x1 = new ListNode(y->val);
                if(head ==NULL) {
                    head = x1;
                    temp = x1;
                }else{
                    temp->next = x1;
                    temp = temp->next;
                }
                y = y->next;
            }
        }
        if(x!=NULL){
             if(head ==NULL) {
                    head = x;
                    temp = head;
                }else{
                    temp->next = x;
                    temp = temp->next;
                }   
        }
        if(y!=NULL) {
             if(head ==NULL) {
                    head = y;
                    temp = head;
                }else{
                    temp->next = y;
                    temp = temp->next;
                }
        }
        return head;
        
    }
};
