/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */





// I DONT KNOW WHY MY CODE IS NOT WORKING .
// COMMENTED IS MY CODE







/*
  int max(int a,int b)
 {
     if(a>b)
     return a;
     return b;
 }

 int getheight(struct TreeNode **ptrr)
 {
     struct TreeNode *ptr;
     ptr=*ptrr;
     static int  t1=0;
     if(t1==9)
     return 9;
     if(ptr==NULL)
     return 0;
     int u1=getheight(&(ptr->left));
     int u2=getheight(&(ptr->right));
     int h1=1+max(u1,u2);
     int balancefactor=u1-u2;
     if(balancefactor<0){
     balancefactor=balancefactor-1;
     balancefactor=balancefactor*(-1);
     }
     else 
     balancefactor=balancefactor+1;
     if(balancefactor>=3)
     {
     t1=9;
     return t1;
     }
     return h1;
 }
bool isBalanced(struct TreeNode* root){
if(root==NULL)
return true;
int heightt=getheight(&root);
if(heightt!=9 || heightt==0)
return true;
else
return false;
}
*/

int order(struct TreeNode* root,bool *resultFlag)
{
    if(root==NULL)
    {return 0;}
    if(!(*resultFlag))
    {return 0;}
    int leftDepth=order(root->left,resultFlag);
    int rightDepth=order(root->right,resultFlag);
    if(leftDepth-rightDepth>1||leftDepth-rightDepth<-1)
    {*resultFlag=false;}
    return (leftDepth>rightDepth?leftDepth:rightDepth)+1;
}
bool isBalanced(struct TreeNode* root) {
    if(root==NULL)
    {return true;}
    bool *resultFlag=(bool*)malloc(sizeof(bool));
    *resultFlag=true;
    order(root,resultFlag);
    return *resultFlag;
    
}