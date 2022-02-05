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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1=headA;
        int l1=0,l2=0;
        while(t1!=NULL){
            l1++;
            t1=t1->next;
        }
        t1=headB;
         while(t1!=NULL){
            l2++;
            t1=t1->next;
        }
        int x= abs(l2-l1);
        if(l1>l2){
            while(x!=0){
                headA=headA->next;
                x--;
            }
        }
        else if(l2>l1){
             while(x!=0){
                headB=headB->next;
                x--;
            }
        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
             headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};