/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {

    if(head==NULL){
        return NULL;
    }

    struct ListNode* pred=NULL;
    struct ListNode* trav=NULL;
    int count=1;
    trav=head;

    while(trav->next!=NULL){
        count++;
        trav=trav->next;
    }


    for(int i=0;i<k%count;i++){

    trav=head;
    pred=head;

    while(trav->next!=NULL){
        pred=trav;
        trav=trav->next;
    }

    if(pred==trav){
        return head;
    }

    pred->next=NULL;
    trav->next=head;
    head=trav;
    }

    return head;
}