/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
Node * joker(Node * otr)
{
    while(otr->next!=NULL)
    otr=otr->next;
    return otr;
}

void check(Node* ptr)
{
    if(ptr==NULL)
    return;
    if(ptr->child!=NULL)
    {
        Node *htr=ptr;
        Node *ktr=ptr->next;
        htr->next=htr->child;
        (htr->child)->prev=htr;
        Node *utr=joker(htr->child);
        htr->child=NULL;
        utr->next=ktr;
        if(ktr!=NULL)
        ktr->prev=utr;
    }
    else
    {
        ptr=ptr->next;
        check(ptr);
        return;
    }
    check(ptr->next);
}

class Solution {
public:
    Node* flatten(Node* head) {
        check(head);
        return head;
    }
};