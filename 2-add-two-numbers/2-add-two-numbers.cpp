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
    ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
        ListNode* l1=h1,*l2=h2;
        int c=0;
        
        int sum= l1->val+l2->val;
         if(sum>9){
               c=1;
              sum=sum%10;
           }
        ListNode* ans=new ListNode(sum);
        ListNode* tail=ans; 
            l1=l1->next;
            l2=l2->next; 
        while(l1!=NULL && l2!=NULL){
            sum= l1->val+l2->val+c;
           if(sum>9){
               c=1;
              sum=sum%10;
           }
            else
                 c=0;
            ListNode* newn=new ListNode(sum); 
            tail->next=newn;
            tail=newn;
            l1=l1->next;
            l2=l2->next; 
        }
         while(l1!=NULL){
                         sum= l1->val+c;
           if(sum>9){
               c=1;
               sum=sum%10;
           }
             else
                 c=0;
             ListNode* newn=new ListNode(sum); 
            tail->next=newn;
            tail=newn;
                         l1=l1->next;
         }
         while(l2!=NULL){
               sum= l2->val+c;
           if(sum>9){
               c=1;
              sum=sum%10;
           }
             else
                 c=0;
             ListNode* newn=new ListNode(sum); 
            tail->next=newn;
            tail=newn;
                         l2=l2->next;
             
         }
        if(c!=0){       
            ListNode* newn=new ListNode(1); 
            tail->next=newn;
            
        } 
        return ans;
    }
};

/*
 ListNode* l1=h1;
        ListNode* l2=h2;
        ListNode* ans;
        int n1,n2,c1=1,c2=1;
        string s1="",s2="";
        while(l1->next!=NULL){
            l1=l1->next;
            c1++;
            s1=to_string(l1->val)+s1;
        }
        //n1=(c1-1)*10+l1->val;
         while(l1->next!=NULL){
            l1=l1->next;
              s2=to_string(l2->val)+s2;
        }
         n1=stoi(s1);
        n2=stoi(s2);
        int x=n1+n2;
        ans->val=x%10;
        x=x/10;
        ListNode* temp=ans;
         while(x!=0){
            
             ListNode* newn=new ListNode(x%10);
             x=x/10;
             temp->next=newn;
             temp=temp->next;
        }
        return ans;
        */