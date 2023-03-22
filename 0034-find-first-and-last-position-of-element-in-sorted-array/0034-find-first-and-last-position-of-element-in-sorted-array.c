/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int first = 0;
    int last = numsSize-1;
    int lasted=last;
    int middle = (first+last)/2;
    int *ar=(int *)malloc(2*sizeof(int));
    int k=-1;
    while(first <= last)
    {
        if(nums[middle]<target)
            first = middle+1;
        else if(nums[middle]==target)
        {
            k=middle;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
   if(k==-1)
    {
        ar[0]=-1;
        ar[1]=-1;
        return ar;
    }
    
    
    while(nums[k]==nums[middle])
    {
        k=k-1;
        if(k<0)
        break;
    }
    ar[0]=k+1;
    k=middle;
    while(nums[k]==nums[middle])
    {
        k=k+1;
        if(k>lasted)
        break;
    }
    ar[1]=k-1;
    return ar;
}