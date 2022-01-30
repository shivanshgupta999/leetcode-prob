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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL ||( head->next==NULL&&n==1)){
            return NULL;
        }
        int cnt=0;
        ListNode* temp= head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        n=cnt-n;
        if(n==0)
            return head->next;
        temp= head;
        while(n!=1){
            n--;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};