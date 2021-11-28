/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
           
                while(temp!=NULL){
                    Node* newnode=new Node(temp->val);
                    newnode->next=temp->next;
                    temp->next=newnode;
                    temp=temp->next->next;
                }
        temp=head;
        while(temp!=NULL){
            if(temp->random==NULL){
                 temp->next->random=NULL;
                temp=temp->next->next;
                continue;
            }
                   temp->next->random=temp->random->next;
                    temp=temp->next->next;
                }
        temp=head;
         Node *pseudoHead = new Node(0);
          Node *ans = pseudoHead;

         while(temp!=NULL){
            

            // extract the copy
            ans->next = temp->next;

            // restore the original list
            temp->next =  temp->next->next;
              
            ans = ans -> next; 
            temp =  temp->next ;
                }
        
        return pseudoHead->next;
        
    }
    
};