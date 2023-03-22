/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
struct ListNode *utr=NULL;
struct ListNode *vtr=NULL;
int m=1;
while(list1!=NULL || list2!=NULL)
{
    if(list1!=NULL && list2!=NULL)
    {
    if(list1->val>list2->val)
    {
struct ListNode *jtr=(struct ListNode*)malloc(sizeof(struct ListNode));
jtr->val=list2->val;
jtr->next=NULL;
list2=list2->next;
if(utr!=NULL)
utr->next=jtr;
else
vtr=jtr;
utr=jtr;
}
else
{
struct ListNode *jtr=(struct ListNode*)malloc(sizeof(struct ListNode));
jtr->val=list1->val;
jtr->next=NULL;
list1=list1->next;
if(utr!=NULL)
utr->next=jtr;
else
vtr=jtr;
utr=jtr;
}
}
else if(list1!=NULL)
{
struct ListNode *jtr=(struct ListNode*)malloc(sizeof(struct ListNode));
jtr->val=list1->val;
jtr->next=NULL;
list1=list1->next;
if(utr!=NULL)
utr->next=jtr;
else
vtr=jtr;
utr=jtr;
}
else
{
struct ListNode *jtr=(struct ListNode*)malloc(sizeof(struct ListNode));
jtr->val=list2->val;
jtr->next=NULL;
list2=list2->next;
if(utr!=NULL)
utr->next=jtr;
else
vtr=jtr;
utr=jtr;
}
}
return vtr;
}