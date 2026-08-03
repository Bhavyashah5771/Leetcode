/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *trav=head;
    struct ListNode *last=NULL;
    struct ListNode *next=NULL;

    while(trav!=NULL){
        next=trav->next;
        trav->next=last;
        last=trav;
        trav=next;
    }
    return last;
}