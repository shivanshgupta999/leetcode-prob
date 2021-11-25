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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
             }
        int x=cnt/2;
        temp=head;
        
           while(x){
               x--;
               st.push(temp->val);
               temp=temp->next;
           }
        if(cnt%2!=0){
            temp=temp->next;
        }
         while(temp!=NULL){
               if(st.top()!=temp->val)
                   return false;
             
               st.pop();
               temp=temp->next;
           }
        return true;
    }
};