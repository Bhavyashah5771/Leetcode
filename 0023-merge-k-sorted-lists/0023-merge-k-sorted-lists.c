/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include<stdlib.h>
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if(listsSize==0) return NULL;
    
    int i=0,gap=1;
    struct ListNode* newlist=NULL;
    struct ListNode* trav1=NULL;
    struct ListNode* trav2=NULL;
    struct ListNode* newnode=NULL;
    struct ListNode* lastnode=NULL;
    
    
    while(gap<listsSize){
    for(i=0;i<listsSize;i+=2*gap){
    if(i+gap>=listsSize){
        continue;
    }
    trav1=lists[i];
    trav2=lists[i+gap];
    newlist=NULL;
    lastnode=NULL;

    while(trav1!=NULL && trav2!=NULL){
        struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        if(trav1->val>trav2->val){
            newnode->val=trav2->val;
            newnode->next=NULL;
            if(newlist==NULL){
                newlist=newnode;
                lastnode=newnode;
            }
            else{
                lastnode->next=newnode;
                lastnode=newnode;
            }
            trav2=trav2->next;
        }
        else{
            newnode->val=trav1->val;
            newnode->next=NULL;
            if(newlist==NULL){
                newlist=newnode;
                lastnode=newnode;
            }
            else{
                lastnode->next=newnode;
                lastnode=newnode;
            }
            trav1=trav1->next;
        }
    }

    if(trav1!=NULL){
        while(trav1!=NULL){
        struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=trav1->val;
            newnode->next=NULL;
            if(newlist==NULL){
                newlist=newnode;
                lastnode=newnode;
            }
            else{
                lastnode->next=newnode;
                lastnode=newnode;
            }
            trav1=trav1->next;
        }
    }
    else if(trav2!=NULL){
        while(trav2!=NULL){
        struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=trav2->val;
            newnode->next=NULL;
            if(newlist==NULL){
                newlist=newnode;
                lastnode=newnode;
            }
            else{
                lastnode->next=newnode;
                lastnode=newnode;
            }
            trav2=trav2->next;
        }
    }
    lists[i]=newlist;
    }
    gap*=2;
    }

    return lists[0];
}