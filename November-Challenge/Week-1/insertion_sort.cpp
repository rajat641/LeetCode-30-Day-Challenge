
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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* temp = head;
        while(temp){

            ListNode* nex = temp->next;
            int valm =  temp->val;
            ListNode* valp = temp;
            while(nex){
                if(nex->val < valm){
                    valm = nex->val;
                    valp = nex;

                }
                nex = nex->next;
            }
            int t = temp->val;
            temp->val = valp->val;
            valp->val = t;
            temp = temp->next;

        }
        return head;
    }
};
