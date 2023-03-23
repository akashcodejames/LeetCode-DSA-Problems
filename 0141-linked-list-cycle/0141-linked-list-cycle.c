/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
     struct ListNode *ptr=NULL;
    struct ListNode *ktr=NULL;
    struct ListNode *ztr=head;
    if(ztr==NULL ||  ztr->next==NULL)
    return false;
    while(ztr!=NULL)
    {
        ptr=ztr;
        ktr=ztr->next;
        ztr->next=NULL;
        ztr=ktr;
        if(ztr==NULL && ptr->val==-9999)
        return true;
        ptr->val=-9999;
    }
    return false;
}