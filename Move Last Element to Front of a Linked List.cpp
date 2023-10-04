class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head==NULL){
            return NULL;
        }
          ListNode* curr=head;
          ListNode* prev=NULL;
        if(curr->next==NULL){
            return head;
        }
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        curr->next=head;
        prev->next=NULL;
        return curr;
        }
    
};
