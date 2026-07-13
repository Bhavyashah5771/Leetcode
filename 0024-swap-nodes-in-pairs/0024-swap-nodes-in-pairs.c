/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {

    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return head;
    }

    struct ListNode* trav=NULL;
    struct ListNode* pred=NULL;
    struct ListNode* temp=NULL;
    struct ListNode* lp=NULL;
    
    trav=head;
     while(trav->next!=NULL){
        if(trav==head){
        pred=trav;
        trav=trav->next;
        temp=trav->next;
        trav->next=pred;
        pred->next=temp;
        lp=pred;
        head=trav;
         if(trav->next->next!=NULL){
            trav=trav->next->next;

        }
        else{
            trav=trav->next;
        }
        }
        else{
        pred=trav;
        trav=trav->next;
        temp=trav->next;
        trav->next=pred;
        pred->next=temp;
        lp->next=trav;
        lp=pred;
        if(trav->next->next!=NULL){
            trav=trav->next->next;

        }
        else{
            trav=trav->next;
        }
        }
     }

    return head;
}