/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(head==NULL){
        return NULL;
    }
    else if(left==right){
        return head;
    }
    struct ListNode* trav=head;
    struct ListNode* last=NULL;
    struct ListNode* next=NULL;
    struct ListNode* before=NULL;
    struct ListNode* after=NULL;
    struct ListNode* le=NULL;
    struct ListNode* ri=NULL;

    int i=1;
    
    while(trav!=NULL){
        if(i+1==left){
            before=trav;
        }
        else if(i==left){
            le=trav;
        }
        else if(i==right){
            ri=trav;
        }
        else if(i-1==right){
            after=trav;
        }
        trav=trav->next;
        i++;
    }
        trav=le;
        last=after;
        while(trav!=after){            
            next=trav->next;
            trav->next=last;
            last=trav;
            trav=next;
        }

        if(left==1){
            head=ri;
        }
        else{
        before->next=ri;
        }

    return head;
}