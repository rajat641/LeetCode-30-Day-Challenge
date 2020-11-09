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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack< int > s1;
        stack< int > s2;
        ListNode* h= l1;
        while(h!=NULL){
            s1.push(h->val);
            h=h->next;
        }
        h = l2;
        while(h!=NULL){
            s2.push(h->val);
            h=h->next;
        }
        int carry =0;
        ListNode* head= NULL;
        while(!s1.empty() && !s2.empty()){
            int f1 = s1.top(); s1.pop();
            int f2 = s2.top(); s2.pop();
            int sum = f1+f2+carry;
            if(sum>=10){
                int g =sum%10;
                carry = sum/10;
                sum = g;
            }else{
                carry=0;
            }
            ListNode* ans = new ListNode(sum);
            if(head==NULL){
                head=ans;
            }else{
                ans->next = head;
                head = ans;
            }
        }
        if(s1.empty()&&s2.empty()){
            if(carry==0) return head;
            else{
            ListNode* ans = new ListNode(carry);
            ans->next = head;
            head=  ans;
            return head;
                
            }
        }else{
          while(!s2.empty()){
              int f2 = s2.top(); s2.pop();
              int f1=0;
              int sum = f1+f2+carry;
            if(sum>=10){
                int g =sum%10;
                carry = sum/10;
                sum = g;
            }else{
                carry=0;
            }
               ListNode* ans = new ListNode(sum);
            if(head==NULL){
                head=ans;
            }else{
                ans->next = head;
                head = ans;
            }
              
          }
            //else{
              while(!s1.empty()){
              int f2 = s1.top(); s1.pop();
              int f1=0;
              int sum = f1+f2+carry;
            if(sum>=10){
                int g =sum%10;
                carry = sum/10;
                sum = g;
            }else{
                carry=0;
            }
               ListNode* ans = new ListNode(sum);
            if(head==NULL){
                head=ans;
            }else{
                ans->next = head;
                head = ans;
            }
              
              
          //}
            
            
        }
        if(carry==0) return head;
            else{
            ListNode* ans = new ListNode(carry);
            ans->next = head;
            head=  ans;
            return head;}
        
        
    }
    }
};
