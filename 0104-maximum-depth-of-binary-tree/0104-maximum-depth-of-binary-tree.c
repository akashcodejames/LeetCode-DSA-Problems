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
        if(preHeight>(*minn))
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

int maxDepth(struct TreeNode* root){
    int max=INT_MIN;
    if(root==NULL)
    return 0;
findHeight(root,&max,1);
return max;
}