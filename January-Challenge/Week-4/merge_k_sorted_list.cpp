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
    struct comp{
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // if(lists.empty()) return NULL;
        priority_queue< ListNode*, vector< ListNode* > , comp > Q; 
        ListNode* head= NULL; ListNode* tail = NULL;
        for(auto &i :lists) {
            if(i!=NULL) Q.push(i);
        }
        while(!Q.empty()){
            auto p = Q.top(); Q.pop();
            if(head==NULL) {
                head= new ListNode(p->val);
                tail = head;
            }else{
                ListNode* temp =new ListNode(p->val);;
                tail->next = temp;
                tail = temp;
            }
            if(p->next!=NULL){
                 Q.push(p->next);
            }
        }
        return head;
    }
};
