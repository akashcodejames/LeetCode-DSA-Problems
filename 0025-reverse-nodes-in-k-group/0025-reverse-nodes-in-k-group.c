/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k){
struct ListNode* ptr=head;;
struct ListNode* ktr;
int o=0;
while(ptr!=NULL)
{
    ktr=ptr;
    int arr[k];
    for(int i=1;i<k;i++)
    {
        arr[i-1]=ptr->val;
        ptr=ptr->next;
        if(ptr!=NULL)
        arr[i]=ptr->val;
        else
        {
        o=1;
        break;
        }
    }
    
    if(o==1)
    break;
    
    for(int m=1;m<k;m++)
    {
        ktr->val=arr[k-m];
        ktr=ktr->next;
        ktr->val=arr[k-m-1];
    }
    
    
ptr=ptr->next;    
}
return head;


}