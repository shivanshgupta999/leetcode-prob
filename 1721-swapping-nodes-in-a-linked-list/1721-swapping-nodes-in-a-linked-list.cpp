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
        int cnt=0;
        ListNode* temp=head,*x1;
         while(temp!=NULL){
             
             cnt++;
             if(cnt==k){
                 x1=temp;
             }
             temp=temp->next;
         }
        temp=head;
        int i=cnt-k;
        while(i>0){
              i--;
             temp=temp->next;
         }
        ListNode* x2 = new ListNode(x1->val);
       
        x1->val=temp->val;
         temp->val=x2->val;
        return head;
    }
};