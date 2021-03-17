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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* D = new ListNode();
        D->next = head;
        ListNode* prev = D;
        ListNode* curr = head;
        for(int i=1;i<k;i++){
            curr = curr->next;
            prev = prev->next;
        }
        
        ListNode* SL  = head;
        ListNode* FS = curr;
        ListNode* prev2 = D;
        while(FS->next){
            FS = FS->next;
            SL = SL->next;
            prev2 = prev2->next;
            
        }
       ListNode* a = curr->next;
       ListNode* b = SL->next;
       prev->next =  SL;
        SL->next = a;
         prev2->next = curr;
        curr->next = b;
        
         
      
        
        
        return D->next;
    }
};
