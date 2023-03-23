/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
struct ListNode *ptr=head;
while(ptr!=NULL)
{
    if(ptr->next!=NULL && ((ptr->next)->val==ptr->val))
    ptr->next=(ptr->next)->next;
    else
    ptr=ptr->next;
}
return head;
}