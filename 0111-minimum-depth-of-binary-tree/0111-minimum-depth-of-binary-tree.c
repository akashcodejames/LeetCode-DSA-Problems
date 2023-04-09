/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void findHeight(struct TreeNode* root,int* minn,int preHeight)
{
    if(root->left==NULL && root->right==NULL)
    {
        if(preHeight<(*minn))
        *minn=preHeight;
    }
    if(root->left!=NULL)
    {
        findHeight(root->left,minn,preHeight+1);
    }
    if(root->right!=NULL)
    {
        findHeight(root->right,minn,preHeight+1);
    }
}
int minDepth(struct TreeNode* root){
    int min=INT_MAX;
    if(root==NULL)
    return 0;
findHeight(root,&min,1);
return min;
}