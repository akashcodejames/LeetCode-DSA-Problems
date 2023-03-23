/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int bst(struct TreeNode *ptr,int *arr,int *i)
 {
         
         if(ptr==NULL)
         return 1;
         arr[*i]=ptr->val;
         *i=*i+1;
         bst(ptr->left,arr,i);
         bst(ptr->right,arr,i);
        return 1;
 }
 
int* preorderTraversal(struct TreeNode* root, int* returnSize){
*returnSize=0;
if(root==NULL)
return returnSize;

int *array1=(int *)malloc(100*sizeof(int));
 bst(root,array1,returnSize);
 return array1;
}