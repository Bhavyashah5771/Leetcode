/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    
    struct ListNode* trav=head;
    struct ListNode* n1=NULL;
    struct ListNode* n2=NULL;
    int i=1,temp=0,j=1;

    while(trav!=NULL){
        i++;
        trav=trav->next;
    }

    trav=head;
    while(trav!=NULL){
        j++;
        if(j==k+1){
            n1=trav;
        }
        
        if(j==i-k+1){
            n2=trav;
        }
        trav=trav->next;
    }

    temp=n1->val;
    n1->val=n2->val;
    n2->val=temp;

    return head;
}