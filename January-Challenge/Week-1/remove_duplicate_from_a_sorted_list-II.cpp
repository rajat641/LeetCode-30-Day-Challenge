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
    ListNode* deleteDuplicates(ListNode* head) {
        stack< ListNode* > st;
       // ListNode* dummy = new ListNode(-1);
        //dummy->next = head;
        ListNode* temp = head;
        ListNode* curr =head;
        int prev = -1;
        map< int, int > rep;
        while(curr!=NULL){
            while(!st.empty() && curr->val == st.top()->val){
                rep[st.top()->val]=1;
                st.pop();
                
            }
            st.push(curr);
            
            curr = curr->next;
        }
        head = NULL;
        temp==NULL;
        while(!st.empty()){
            auto k = st.top(); st.pop();
            if(rep[k->val]==1) continue;
            if(head==NULL){
                head = k; temp = k;
                head->next = NULL;
            }else{
                k->next = head;
                head = k;
            }
           
        }
        return head;
    }
};
