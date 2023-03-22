/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
struct ListNode* ptr1=l1;
struct ListNode* ptr2=l2;
struct ListNode* ptr;
struct ListNode* ftr=NULL;
struct ListNode* rtnptr;
int v1=0,v2=0,v3=0,carry=0,net_pushed_val=0,y=4,e=4;

while(ptr1!=NULL || ptr2!=NULL)
{
    if(ptr1!=NULL)
    v1=ptr1->val;
    else
    v1=0;
    if(ptr2!=NULL)
    v2=ptr2->val;
    else 
    v2=0;
    v3=v1+v2+carry;
    net_pushed_val=v3%10;
    carry=v3/10;
    ptr=(struct ListNode*)malloc(sizeof(struct ListNode));
    
    ptr->val=net_pushed_val;
    ptr->next=NULL;
    if(y==e)
    {
        rtnptr=ptr;
        y=10;
    }
    if(ftr!=NULL)
    {
        ftr->next=ptr;
        ftr=ptr;
    }
    else
    {
        ftr=ptr;
        
    }
    if(ptr1!=NULL)
    ptr1=ptr1->next;
    else
    ptr1=NULL;
    
    if(ptr2!=NULL)
    ptr2=ptr2->next;
    else
    ptr2=NULL;
    
}
if(carry!=0)
{
    struct ListNode *k1=(struct ListNode*)malloc(sizeof(struct ListNode));
    k1->val=carry;
    k1->next=NULL;
    ptr->next=k1;
}
  return rtnptr;
}