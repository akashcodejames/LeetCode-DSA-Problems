/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 
struct ListNode * createNode()
{
    struct ListNode *htr=(struct ListNode*)malloc(sizeof(struct ListNode));
    return htr;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if(listsSize==1)
    {
        return lists[0];
    }
    int m=0;
    int ttr=0;
    while(m<listsSize)
    {
        if(lists[m]==NULL)
        ttr++;
        m++;
    }
    if(ttr==listsSize)
    return NULL;
    
    int j=listsSize-ttr;
    int min1=0;
    int min2=-10;
    int t1=-1;
    struct ListNode *qtr=NULL;
    struct ListNode *prevtr=NULL;
    while(j>0)
    {
        int i=0;
        while (i<listsSize-1)
        {
        struct ListNode *ptr1=lists[i];
        struct ListNode *ptr2=lists[i+1];
        if(ptr1==NULL && ptr2==NULL)
        {
            i++;
            continue;
        }
        if(ptr1==NULL || ptr2==NULL)
        {
            if(ptr1==NULL)
            {
                min1=i+1;
            }
            else
            min1=i;
        }
        else
        {
            if(ptr1->val<ptr2->val)
            min1=i;
            else
            min1=i+1;
        }


        if(min2!=-10)
    {
        if((lists[min1]->val)<(lists[min2]->val)){
        min2=min1;
        }
    }
    else
    min2=min1;
        i++;
    }

    struct ListNode *itr=createNode();
    if(qtr!=NULL)
    prevtr->next=itr;

    if(qtr==NULL)
    qtr=itr;

    itr->val=lists[min2]->val;
    itr->next=NULL;

    prevtr=itr;

    lists[min2]=lists[min2]->next;

    if(lists[min2]==NULL)
    j--;
    
    min2=-10;

    }
    return qtr;

}