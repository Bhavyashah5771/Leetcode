/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL){
        return NULL;
    }
    struct ListNode* pred=NULL;
    struct ListNode* trav=NULL;

    trav=head;

    while(trav->next!=NULL){
        pred=trav;
        trav=trav->next;
        while(pred->val==trav->val){
            trav=trav->next;
            if(trav==NULL){
                break;
            }
        }
        pred->next=trav;
        if(trav==NULL){
            break;
        }
    }

    return head;
}