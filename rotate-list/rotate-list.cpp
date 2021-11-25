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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 ||head==NULL||head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* tail; 
        int cnt=1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        tail=temp;
         tail->next=head;
        
        k=k%cnt;
        int x=cnt-k;
        temp=head;
        while(x!=1){
            x--;
            temp=temp->next;
        }
        head=temp->next;
      temp->next=NULL;
        return head;
    }
};