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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        ListNode* newn= new ListNode(0);
        newn->next=head;
        ListNode* prev=newn,*cur,*ne;
        while(n>=k){
            cur = prev->next;
             ne = cur->next;
           for(int i=0;i<k-1;i++){
            cur->next=ne->next;
               ne->next=prev->next;
               prev->next=ne;
               ne=cur->next;
        }
            n-=k;
            prev=cur;
        }
        return newn->next;
        
       
    }
};