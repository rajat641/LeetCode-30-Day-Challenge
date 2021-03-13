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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
           ListNode* X = headA;
            ListNode *Y = headB;
        int cnt = 0;
        while(X!=Y){
            if(X==NULL){
                X = headB;
            }
            if(Y==NULL) Y= headA;
            if(X == Y) return X;
            X = X->next;
            Y = Y->next;
        }
        return X;
    }
};
