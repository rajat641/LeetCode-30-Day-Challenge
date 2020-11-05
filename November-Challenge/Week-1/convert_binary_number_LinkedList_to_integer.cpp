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
    int getDecimalValue(ListNode* head) {
        stack< ListNode* > st;
        while(head){
            st.push(head);
            head=  head->next;
        }
        int ans = 0;
        int k =0;
        while(!st.empty()){
            auto p = st.top(); st.pop();
            ans+=(p->val)*(1<<k);
            ++k;
        }
        return ans;
    }
};
